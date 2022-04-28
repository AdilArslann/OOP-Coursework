#include "Junior.h"
#include <iostream>
using namespace std;

void Junior::getinfo(int n, int m)
{
	age = n;
	experience = m;
	cout << "Please enter the total programming languages the person knows: ";
	while (!(cin >> numoflan) || numoflan < 1 )
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "That is impossible, Enter the total programming languages the person knows: ";
	}
	cout << "Please enter the total work hours a day: ";
	while (!(cin >> thad) || (thad < 0 || thad > 15))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Please make sure you are typing correctly, the value has to be between 0 and 15: ";
	}
}


void Junior::calculate()
{
	total = 0;
	day = numoflan * 2;
	day = day + (experience * 3);
	day = day * thad;
	month = day * 30;
	cout << "the employee would make " << day << " a day." << endl;
	cout << "And would make " << month << " a month." << endl;
	cout << "Please enter the age you would like to retire or quit from this job: ";
	while (!(cin >> page) || (age >= page || page >= 60))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Please enter a proper age that you would like to retire or quit from this job: ";
	}
	for(int j = 0; j < (page - age); j++)
	{
		for (int i = 0; i < 12; i++)
		{
			day = numoflan * 2;
			day = day + (experience * 3);
			day = day * thad;
			month = day * 30;
			total = total + month;
		}
		day = 0;
		month = 0;
		experience++;
		if (j%2 == 0)//considering that every 2 years the developer learns a new language
		{
			numoflan++;
		}
	}
	cout << "The total money you would make if you worked from the age " << age << " to " << page << " is: " << total;
}
