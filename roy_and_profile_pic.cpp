///https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/



#include<iostream>
using namespace std;

int main()
{
	int Length,No_of_photos,Width,Height;
	cin >> Length;
	cin >> No_of_photos;
	while(No_of_photos--)
	{
		cin >> Width >> Height;
		if(Width < Length || Height < Length )
		{
			cout << "UPLOAD ANOTHER \n";
		}
		else if(Width == Height)
		{
			cout << "ACCEPTED \n";
		}
		else
		{
			cout << "CROP IT \n";
		}
	}
}