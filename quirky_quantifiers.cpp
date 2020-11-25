/// problem link => https://codeforces.com/problemset/problem/952/A

#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;
    if(number % 2 == 0)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }

    return 0;
}
