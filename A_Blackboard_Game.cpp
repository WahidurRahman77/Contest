#include <iostream>

int main() 
{
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    while (t--) 
    {
        int n;
        std::cin >> n;
        if (n % 4 == 0) 
        {
            std::cout << "Bob\n";
        } 
        else 
        {
            std::cout << "Alice\n";
        }
    }
    return 0;
}