#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <unordered_map>

void solve() 
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    std::unordered_map<int, int> val_to_idx;
    for (int i = 0; i < n; ++i) 
    {
        std::cin >> a[i];
        val_to_idx[a[i]] = i;
    }

    std::vector<int> pmin(n);
    pmin[0] = a[0];
    for (int i = 1; i < n; ++i) 
    {
        pmin[i] = std::min(pmin[i - 1], a[i]);
    }

    std::vector<int> smax(n);
    smax[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i)
    {
        smax[i] = std::max(smax[i + 1], a[i]);
    }

    std::set<int> winners;

    for (int k = 0; k < n - 1; ++k) 
    {
        winners.insert(pmin[k]);
        winners.insert(smax[k + 1]);
    }
    
    winners.insert(pmin[n-1]);
    winners.insert(smax[0]);


    std::string result(n, '0');
    for (int winner_val : winners) 
    {
        if (val_to_idx.count(winner_val)) 
        {
            result[val_to_idx[winner_val]] = '1';
        }
    }

    std::cout << result << "\n";
}

int main() 
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) 
    {
        solve();
    }

    return 0;
}