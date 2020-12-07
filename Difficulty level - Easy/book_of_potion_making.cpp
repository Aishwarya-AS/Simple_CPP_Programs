///https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/sum-it-if-you-can-4867f851/


#include<iostream>
using namespace std;
int main()
{
	long int isbn;
	cin >> isbn;
	int i,count=0,temp,val=0;
	while(isbn)
	{
		count++;
		isbn /= 10;
	}
	if(count == 10)
	{
		while(isbn)
		{
			temp = isbn % 10;
			for(i=10; i>=1; i--)
			{
				val = val + temp * isbn;
				isbn /= 10;
			}
		}
		if(val % 11 == 0)
		{
			cout << "Legal ISBN";
		}
	}
	else
	{
		cout << "Illegal ISBN";
	}
}
