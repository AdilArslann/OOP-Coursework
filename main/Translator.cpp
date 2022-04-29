#include "Translator.h"


void Translator::getinfo()
{
	cout << "Please enter the total languages the translator knows: ";
	while (!(cin >> numlan) || numlan < 1)
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "That is impossible, Enter the total languages the translator knows: ";
	}
	cout << "Please enter the total work hours a day: ";
	while (!(cin >> thad) || (thad < 0 || thad > 15))
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please make sure you are typing correctly, the value has to be between 0 and 15: ";
	}
	cout << "Please enter the total clients translator can help each day: ";
	while (!(cin >> ppl))
	{
		cin.clear();
		cin.ignore(256, '\n');
		cout << "Please make sure you are typing correctly:";
	}
}

void Translator::calculate(int n, int m)
{
	age = n;
	experience = m;
	total = 0;
	day = numlan * 3;
	day = day + (ppl + experience * 1.5);
	day = day * thad;
	month = day * 30;
	cout << "the employee would make " << day << " a day." << endl;
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
			day = numlan * 3;
			day = day + (ppl + experience * 1.5);
			day = day * thad;
			month = day * 30;
			total = total + month;
		}
		day = 0;
		month = 0;
		experience++;
	}
	cout << "The total money you would make if you worked from the age " << age << " to " << page << " is: " << total;
}
