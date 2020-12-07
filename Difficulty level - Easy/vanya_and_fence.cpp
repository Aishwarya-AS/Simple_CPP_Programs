///https://codeforces.com/problemset/problem/677/A

#include <iostream>

using namespace std;

int main()
{
    int no_of_frnds,height_of_fence;
    cin >> no_of_frnds >> height_of_fence;
    int width_of_fence = 0;
    while(no_of_frnds--)
    {
        int height_of_a_person;
        cin >> height_of_a_person;
        if(height_of_a_person > height_of_fence)
        {
            width_of_fence += 2;
        }
        else
        {
            width_of_fence += 1;
        }
    }
    cout << width_of_fence;
    
    return 0;
}
