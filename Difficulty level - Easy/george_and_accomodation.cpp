///https://codeforces.com/problemset/problem/467/A

#include <iostream>

using namespace std;

int main()
{
    int no_of_rooms;
    cin >> no_of_rooms;
    int rooms_for_them = 0;
    while(no_of_rooms--)
    {
        int no_of_ppl_lived,capacity;
        cin >> no_of_ppl_lived >> capacity;
        int remaining_rooms;
        remaining_rooms = capacity - no_of_ppl_lived;
        if(remaining_rooms == 0)
        {
            continue;
        }
        else
        {
            if(remaining_rooms >=2)
            {
                rooms_for_them++;
            }
            else
            {
                continue;
            }
        }
    }
    cout << rooms_for_them;

    return 0;
}
