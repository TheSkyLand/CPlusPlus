#include <iostream>
#include <cmath>
using namespace std;

//!WORK IN PROGRESS
int main()
{
	int K = 2; //наибольшее количество людей в лифте

	int	F = 3; //количество этажей

	int a[] = { 3, 0, 1 };

	// 3 на 1 этаже
	// 0 на 2 этаже
	// 1 на 3 этаже

	int seconds{};



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
				else if(a[i] < K)//если людей в лифте меньше чем большее количество, то добавь к секундам то количество, сколько людей в лифте
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
