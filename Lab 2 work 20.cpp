#include <iostream>
using namespace std;
int main()
{
	cout << "enter a: ";
	double a;
	cin >> a;

	cout << "enter b: ";
	double b;
	cin >> b;

	cout << "enter c: ";
	double c;
	cin >> c;

	cout << "enter x: ";
	double x;
	cin >> x;

	cout << "enter y: ";
	double y;
	cin >> y;

	if (x < 3 && y < 0)
	{
		double ElMin = x; // SUGGEST
		if (ElMin > y)
		{
			ElMin = y;
		}
		if (ElMin > (x + y) / (x - y)) 
		{
			ElMin = (x + y) / (x - y);
		}
		double v = ((a + b + c) / 2) * ElMin;
		cout << v;
	}
	else if (x > 0 && y > 1)
	{
		double ElMax = pow(x, 2);
		if (ElMax < pow(y, 3))
		{
			ElMax = pow(y, 3);
		}
		double v = ElMax = pow(y, 3);
		cout << v;
		
	}
	else
	{
	double v = y * (a + b + c);
	cout << v;
	}
	
}
