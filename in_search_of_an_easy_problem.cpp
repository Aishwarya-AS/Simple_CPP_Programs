///https://codeforces.com/problemset/problem/1030/A

#include <iostream>

using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    int val,flag=0;
    while(test_cases--)
    {
        cin >> val;
        if(val==0)
        {
            flag = 0;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0 )
    {
        cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
   
    return 0;
}
