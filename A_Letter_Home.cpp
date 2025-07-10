#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

     int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        vector<long long> x(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> x[i];
        }

        long long min_pos = x[0];
        long long max_pos = x[n - 1];

        long long cost1 = abs(s - min_pos) + (max_pos - min_pos);

        long long cost2 = abs(s - max_pos) + (max_pos - min_pos);

        cout << min(cost1, cost2) << "\n";
    }

    return 0;
}
