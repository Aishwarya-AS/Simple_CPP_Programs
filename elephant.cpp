///https://codeforces.com/problemset/problem/617/A

#include <iostream>

using namespace std;

int main()
{
    int coordination_point;
    cin >> coordination_point;
    int steps=0;
    while(coordination_point >= 5)
    {
        coordination_point -= 5;
        steps++;
    }
    while(coordination_point >= 4)
    {
        coordination_point -= 4;
        steps++;
    }
    while(coordination_point >= 3)
    {
        coordination_point -= 3;
        steps++;
    }
    while(coordination_point >= 2)
    {
        coordination_point -= 2;
        steps++;
    }
    while(coordination_point >= 1)
    {
        coordination_point -= 1;
        steps++;
    }
    cout << steps;

    return 0;
}

