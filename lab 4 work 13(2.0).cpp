#include <iostream>
#include <cmath>

using namespace std;

double teorema(double);
double radius(double, double, double);
int main()
{
	setlocale(LC_ALL, "Russian");
	double a;
	double b;
	double c;
	double s1;
	double s2;
	double s3;
	double r;
	double R = 180;

	cout << " введите a " << endl;
	cin >> a;
	s1 = teorema(a);
	cout << " 1 сторона треугольника " << s1 << endl << endl;

	cout << " введите b " << endl;
	cin >> b;
	s2 = teorema(b);
	cout << " 2 сторона треугольника " << s2 << endl << endl;

	cout << " введите c " << endl;
	cin >> c;
	s3 = teorema(c);
	cout << " 3 сторона треугольника " << s3 << endl << endl;

	cout << " введите радиус ";
	cin >> r;

	double s = ((s1 = s2 = s3) = 2 * r);
	cout << " стороны треугольника определены по теореме синусов: " << s << endl << endl;

	R = radius(a, b, c);
	cout << " радиус описанной окружности: " << R;
}
double teorema(double a)
{
	double s = a / sin(a);
	return s;
}
double radius(double a, double b, double c)
{
	double R = a + b + c;
	return R = 180;
}