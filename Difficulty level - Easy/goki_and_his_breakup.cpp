///https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/tds-and-his-breakup/


#include<iostream>
using namespace std;

int main()
{
	int no_of_people;
	cin >> no_of_people;
	int skills_required;
	cin >> skills_required;
	while(no_of_people--)
	{
		int their_skills;
		cin >> their_skills;
		if(their_skills >= skills_required)
		{
			cout << "YES \n";
		}
		else
		{
			cout << "NO \n";
		}
	}

}