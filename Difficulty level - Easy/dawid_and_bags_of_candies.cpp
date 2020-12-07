///https://codeforces.com/problemset/problem/1230/A

#include <iostream>

using namespace std;

int main()
{
    int a1,a2,a3,a4;
    cin >> a1 >> a2 >> a3 >> a4;
    if(a1+a2 == a3+a4 || a1+a3 == a2+a4 || a1+a4 == a2+a3)
    {
        cout << "YES";
    }
    else if(a2+a3+a4 == a1 || a1+a3+a4 == a2 || a1+a2+a4 == a3 || a1+a2+a3 == a4)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
