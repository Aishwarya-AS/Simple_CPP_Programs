///https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/teddy-and-tweety/


#include<iostream>
using namespace std;
int main()
{
	int number;
	cin >> number;
	int temp;
	temp = number / 3;
	if(temp * 3 == number)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}