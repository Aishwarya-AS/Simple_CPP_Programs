///https://codeforces.com/problemset/problem/734/A

#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int no_of_games;
    cin >> no_of_games;
    string s;
    cin >> s;
    int count_of_A,count_of_D;
    count_of_A = count(s.begin() ,s.end() , 'A');
    count_of_D = count(s.begin() ,s.end() , 'D');
    if(count_of_A == count_of_D)
    {
        cout << "Friendship";
    }
    else
    {
        if(count_of_A > count_of_D)
        {
            cout << "Anton";
        }
        else
        {
            cout << "Danik";
        }
    }


    return 0;
}







