#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, m;
    cin >> n >> m;

    priority_queue<long long> alice;
    priority_queue<long long> bob;

    for(int i = 0; i < n; i++) 
    {
        long long x;
        cin >> x;
        alice.push(x);
    }

    for(int i = 0; i < m; i++) 
    {
        long long x;
        cin >> x;
        bob.push(x);
    }

    int turn = 0; 

    while(!alice.empty() && !bob.empty()) 
    {
        
        if(turn == 0) 
        { 
            long long a_max = alice.top(); 
            long long b_max = bob.top();   
            
            bob.pop(); 

            if(b_max > a_max) 
            {
                bob.push(b_max - a_max);
            }
        } 
        else 
        { 
            long long b_max = bob.top();   
            long long a_max = alice.top(); 
            
            alice.pop(); 

            if(a_max > b_max) 
            {
                alice.push(a_max - b_max);
            }
        }

        turn = 1 - turn;
    }

    if(alice.empty()) 
    {
        cout << "Bob" << endl;
    } 
    else 
    {
        cout << "Alice" << endl;
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) 
    { 
        solve();
    }
    return 0;
}