#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x;
	double y;
	cout << " Введите x = ";
	cin >> x;
	cout << " Введите y = ";
	cin >> y;
	double t = cos(3.14 / 7) * pow(sin(x - 8 * y), 2);
	cout << t << endl << endl;
}


