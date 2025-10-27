#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

//!WORK IN PROGRESS
int main()
{
	int K{};
	cout << "Enter K: " << endl;;
	cin >> K;

	int F{};
	cout << "Enter F: " << endl;
	cin >> F;

	vector<int> a(F);

	int seconds = 0;

	for (int i = 0; i <= F; i++)
	{
		cout << "enter number: " << endl;
		cin >> a[i];
	}

	for (int i = 0; i <= F; i++)
	{
		seconds++;//добавь секунду за перемещение по этажам
		if (i != F) {

			if (a[i] != 0)
			{
				continue;
				if (a[i] >= K) //если людей в лифте больше чем большее количество, то добавь к секундам наибольшее количество людей в лифте
				{
					seconds += K;
				}
				else if (a[i] < K)//если людей в лифте меньше чем большее количество, то добавь к секундам то количество, сколько людей в лифте
				{
					seconds += a[i];
				}
			}
			continue;
		}
		else {
			break;
		}
	}
	for (int i = F; i >= 0; i--)
	{
		seconds++;
		if (i == 0)
		{
			break;
		}
	}

	std::cout << seconds; //8

	 
	
}
