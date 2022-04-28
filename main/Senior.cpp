#include "Senior.h"

void Senior::getinfo(int n, int m)
{
	age = n;
	experience = m;
	cout << "Please enter the total programming languages the person knows:";
	cin >> numoflan;
	while (numoflan < 1)
	{
		cout << "That is impossible, Enter the total programming languages the person knows:";
		cin >> numoflan;
	}
	cout << "Please enter the total work hours a day:";
	cin >> thad;
	while (thad < 0 || thad > 15)
	{
		cout << "Please make sure you are typing correctly, the value has to be between 0 and 15";
		cin >> thad;
	}
}

void Senior::calculate()
{
	total = bonus;
	day = numoflan * 2;
	day = day + (experience * 3);
	day = day * thad;
	month = day * 30;
	cout << "the employee would make " << day << " a day." << endl;
	cout << "And would make " << month << " a month." << endl;
	cout << "The employee would also get an initial bonus of " << bonus << endl;
	cout << "Please enter the age you would like to retire or quit from this job:";
	cin >> page;
	while (age >= page)
	{
		cout << "Please enter a proper age that you would like to retire or quit from this job:";
		cin >> page;
	}
	for (int j = 0; j < (page - age); j++)
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
		if (j % 2 == 0)//considering that every 2 years the developer learns a new language
		{
			numoflan++;
		}
	}
	cout << "The total money you would make if you worked from the age " << age << " to " << page << " is: " << total;
}
