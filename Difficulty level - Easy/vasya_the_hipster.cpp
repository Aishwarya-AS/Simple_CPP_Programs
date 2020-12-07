///https://codeforces.com/problemset/problem/581/A

#include <iostream>

using namespace std;

int main()
{
    int red_socks,blue_socks;
    cin >> red_socks >> blue_socks;
    int diff_color_of_socks;
    int same_color_of_socks;
    int value;
    if(red_socks < blue_socks)
    {
        value = blue_socks - red_socks;
        diff_color_of_socks = red_socks;
    }
    else
    {
        value = red_socks - blue_socks;
        diff_color_of_socks = blue_socks;
    }
    if(value >= 2)
    {
        same_color_of_socks = value / 2;
    }
    else
    {
        same_color_of_socks = 0;
    }
    cout << diff_color_of_socks << " " << same_color_of_socks;

    return 0;
}
