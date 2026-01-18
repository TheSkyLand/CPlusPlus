#include <iostream>
using namespace std;


int main()
{
	int day;
	int twoweeks;

	cin >> day >> twoweeks;

	twoweeks = day - 14;

	if (twoweeks <= 0)
	{
		twoweeks += 31;
	}

	int week = day - 7;

	if (week <= 0)
	{
		week += 31;
	}
	cout << week;
}
