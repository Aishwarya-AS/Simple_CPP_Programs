///https://codeforces.com/problemset/problem/546/A
#include <iostream>

using namespace std;

int main()
{
    int cost,amount,no_of_bananas;
    cin >> cost  >> amount >> no_of_bananas;
    int temp,total_amount=0,money_needed;
    for(int i=1; i<=no_of_bananas; i++){
        temp = i*cost;
        total_amount = total_amount + temp;
    }
    if(amount > total_amount){
        cout << 0;
    }
    else{
        money_needed = total_amount - amount;
        cout << money_needed;
    }
   
    return 0;
}
