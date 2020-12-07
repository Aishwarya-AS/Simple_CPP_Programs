///https://codeforces.com/problemset/problem/791/A

#include <iostream>

using namespace std;

int main()
{
    int limak_weight,bob_weight;
    cin >> limak_weight >> bob_weight;
    int count=0;
    while(limak_weight <= bob_weight)
    {
        count++;
        limak_weight = limak_weight * 3;
        bob_weight = bob_weight * 2;
    }
    
    cout << count;
    
    return 0;
}