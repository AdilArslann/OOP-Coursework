#include "Artist.h"

void Artist::getinfo()
{
	cout << "Please enter the total drawing/modelling applications the artist can use: ";
	while (!(cin >> numprogram) || numprogram < 1)
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "That is impossible, Enter the total drawing/modelling applications the artist can use: ";
	}
	cout << "Please enter the total commissions that artist can fulfill in a month: ";
	while (!(cin >> totalcommonth))
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please make sure you are typing correctly:";
	}
}

void Artist::calculate(int n, int m)
{
	age = n;
	experience = m;
	day = numprogram * 5;
	day = day + (experience * 3);
	month = day * 30 + (totalcommonth * 15);
	day = month / 30;
	cout << "the employee would make " << (double)month / 30 << " a day. (On average)" << endl;
	cout << "And would make " << month << " a month." << endl;
	cout << "Please enter the age you would like to retire or quit from this job: ";
	while (!(cin >> page) || (age >= page || page >= 60))
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please enter a proper age that you would like to retire or quit from this job: ";
	}
	for (int j = 0; j < (page - age); j++)
	{
		for (int i = 0; i < 12; i++)
		{
			day = numprogram * 5;
			day = day + (experience * 3);
			month = day * 30 + (totalcommonth * 15);
			total = total + month;
		}
		day = 0;
		month = 0;
		experience++;
	}
	cout << "The total money you would make if you worked from the age " << age << " to " << page << " is: " << total;
}
