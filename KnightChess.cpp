#include <iostream>
#include "ConsoleApplication3.h"


//станислав олгеович больше не задавайте такие задания
int main()
{
	int a[5] = { 4, 2, 3, 5, 1 };

	int b[5]{};

	int f[5]{};

	int vertical = 5;

	int horizontal = 4;

	int len = int16_t(std::size(a));
	std::cout << len << std::endl;

	int array[5]{};

	int arrayB[5]{};
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << "enter number: ";
		std::cin >> array[i];
	}

	std::cout << "debug pause" << std::endl;

	system("pause");

	std::cout << "Custom lines: " << std::endl;

		for (int i = 4; i >= 0; i--)
	{
		arrayB[i] += array[i];

		array[i] = 5 + 1 - vertical;

		vertical--;
	}

	std::cout << "Input elements: " << std::endl;

	for (int i = 0; i < std::size(array); i++)
	{
		std::cout << arrayB[i]; 
	}
	std::cout << " " << std::endl;

	for (int i = 0; i < std::size(array); i++)
	{
		std::cout << array[i];
	}

	std::cout << " " << std::endl;						

	std::cout << "Output elements: " << std::endl;
	for (int i = 0; i < 5; i++)
	{
		array[i] = 5 + 1 - arrayB[arrayB[i] - 1]; //местами меняем индекс чисел и сами числа



		std::cout << array[i];
	}
	//код выше для того чтобы подставлять свои цифры
	
	//////////////////////////////////отладка

	//здесь просто отладочные строки, ничего особенного, но уточним некоторые моменты
	/*
	5 4 -> 1 1 
	4 2 -> 2 4
	3 3 -> 3 3
	2 5 -> 4 5
	1 1 -> 5 2

	слева вводные числа.
	а справа числа, которые прошли через операцию a[i] = n + 1 - i
	по крайней мере так написано в описании задачи, в моём случае это
	массив[i] = размер поля + 1 - массив2[массив2[индексЭлемента] - 1] то есть, допустим i = 0;
	a[0(5)] = 5 + 1 - b[b[0(4) - 1]]

	*/


	std::cout << "Debug lines: " << std::endl;

	vertical = 5;

	horizontal = 4;

	for (int i = 4; i >= 0; i--)
	{
		b[i] += a[i];

		a[i] = 5 + 1 - vertical;

		vertical--;
	}

	std::cout << "Input elements: " << std::endl;

	for (int i = 0; i < std::size(a); i++)
	{
		std::cout << b[i];
	}
	std::cout << " " << std::endl;

	for (int i = 0; i < std::size(a); i++)
	{
		std::cout << a[i];
	}

	std::cout << " " << std::endl;						

	std::cout << "Output elements: " << std::endl;

	for (int i = 0; i < 5; i++)
	{
		a[i] = 5 + 1 - b[b[i] - 1];

		std::cout << a[i];
	}
}
