///https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/doctors-secret/

#include<iostream>
using namespace std;
int main()
{
	int length_of_book;
	int no_of_pages;
	cin >> length_of_book >> no_of_pages;
	if(length_of_book <= 23)
	{
		if(no_of_pages >= 500 && no_of_pages <= 1000)
		{
			cout << "Take Medicine";
		}
	}
	else
	{
		cout << "Don't take Medicine";
	}
}