///https://codeforces.com/problemset/problem/822/A

#include <iostream>

using namespace std;

int factorial(int num)
{
    int val = 1;
    for(int i=1; i<=num; i++)
    {
        val *= i;
    }
    return val;
}

int gcd(int val1, int val2)
{
    if(val1 == 0)
    {
        return val2;
    }
    if(val2 == 0)
    {
        return val1;
    }
    if(val1 == val2)
    {
        return val1;
    }
    if(val1 > val2)
    {
        return gcd(val1-val2,val2);
    }
    else
    {
        return gcd(val1,val2-val1);
    }
}


int main()
{
    int a,b;
    cin >> a >> b;
    long fact_of_a,fact_of_b;
    int ans;
    fact_of_a = factorial(a);
    fact_of_b = factorial(b);
    ans = gcd(fact_of_a,fact_of_b);
    cout << ans;
    
    return 0;
}

