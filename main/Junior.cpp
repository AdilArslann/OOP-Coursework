#include "Junior.h"
#include <iostream>
using namespace std;

void Junior::getinfo(int n, int m)
{
	age = n;
	experience = m;
	cout << "Please enter the total programming languages the person knows:" << endl;
	cin >> numoflan;
	while (numoflan < 0 )
	{
		cout << "That is impossible, Enter the total programming languages the person knows:";
		cin >> numoflan;
	}
	cout << "Please enter the total work hours a day:" << endl;
	cin >> thad;
	while (thad < 0 || thad > 15)
	{
		cout << "Please make sure you are typing correctly, the value has to be between 0 and 15" << endl;
		cin >> thad;
	}
}


void Junior::calculate()
{
	day = numoflan * 2;
	day = day + (experience * 3);
	day = day * thad;
	month = day * 30;
	cout << "the employee would make " << day << " a day." << endl;
	cout << "And would make " << month << " a month." << endl;
}
