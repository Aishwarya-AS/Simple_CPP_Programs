///https://codeforces.com/problemset/problem/1186/A

#include <iostream>

using namespace std;

int main()
{
    int no_of_participants;
    int no_of_pens;
    int no_of_notebooks;
    cin >> no_of_participants >> no_of_pens >> no_of_notebooks;
    if(no_of_pens < no_of_participants)
    {
        cout << "No";
    }
    else
    {
        if(no_of_notebooks < no_of_participants)
        {
            cout << "No";
        }
        else
        {
            cout << "Yes";
        }
    }

    return 0;
}
