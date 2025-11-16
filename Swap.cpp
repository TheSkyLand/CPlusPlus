#include <iostream>

using namespace std;

int main()
{
	int a[] = { 9, 3, 7, 6, 5, 1 };
	int len = size(a);

	int max = a[0];
	int min = a[0];

	for (int i = 0; i < len; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	for (int i = 0; i < len; i++)
	{
		if (min > a[i]) {
			min = a[i];
		}
	}

	for (int i = 0; i < len; i++) {
		if (a[i] == max)
		{
			a[i] = min;
		}
		else if (a[i] == min)
		{
			a[i] = max;
		}
	}

	cout << min << endl << "min" << endl;
	cout << max << endl << "max" << endl;

	for (int i = 0; i < len; i++)
	{
		cout << a[i];
	}
}
