/// https://codeforces.com/problemset/problem/41/A

#include <iostream>

using namespace std;

int main()
{
    string str1,str2;
    cin >> str1 >> str2;
    int i;
    string reversed_str;
    for(i = str1.length()-1; i>=0; i--)
    {
        reversed_str.push_back(str1[i]);
    }
    if ( reversed_str != str2)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}
