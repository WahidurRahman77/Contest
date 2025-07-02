#include <iostream>
#include <vector>
#include <numeric>

void solve() 
{
    int n, j, k;
    std::cin >> n >> j >> k;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) 
    {
        std::cin >> a[i];
    }

    int player_j_strength = a[j - 1];

    if (k > 1) 
    {
        std::cout << "YES\n";
        return;
    }

    bool can_be_champion = true;
    for (int i = 0; i < n; ++i) 
    {
        if (i == j - 1) 
        {
            continue;
        }
        if (a[i] > player_j_strength) 
        {
            can_be_champion = false;
            break;
        }
    }

    if (can_be_champion) 
    {
        std::cout << "YES\n";
    } 
    else 
    {
        std::cout << "NO\n";
    }
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