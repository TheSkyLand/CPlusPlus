#include <iostream>;
#include <vector>;
using namespace std;


//станислав олгеович больше не задавайте такие задания
int main()
{
	//int a[5] = { 4, 2, 3, 5, 1 };
	//int b[5]{};

	//int len = std::size(a);
	//cout << "len: ";
	//cout << len << endl;

	cout << "enter size: " << endl;

	int SIZE;
	cin >> SIZE;

	int vertical = SIZE;

	cout << SIZE;

	std::vector<int> arr(SIZE);
	std::vector<int> arrB(SIZE);

	

	for (int i = 0; i < SIZE; i++)
	{
		cout << "enter number: ";
		cin >> arr[i];
	}

	cout << "Custom lines: " << endl;

	for (int i = SIZE - 1; i >= 0; i--)
	{
		arrB[i] = arr[i];

		arr[i] = SIZE + 1 - vertical;

		vertical--;
	}

	cout << "Input elements: " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << arrB[i];
	}
	cout << " " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i];
	}

	cout << " " << endl;

	cout << "Output elements: " << endl;

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = SIZE + 1 - arrB[arrB[i] - 1]; //местами меняем индекс чисел и сами числа

		cout << arr[i];
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

	/*
	cout << "Debug lines: " << endl;

	vertical = 5;

	horizontal = 4;

	for (int i = 4; i >= 0; i--)
	{
		b[i] += a[i];

		a[i] = len + 1 - vertical;

		vertical--;
	}

	cout << "Input elements: " << endl;

	for (int i = 0; i < std::size(a); i++)
	{
		cout << b[i];
	}
	cout << " " << endl;

	for (int i = 0; i < std::size(a); i++)
	{
		cout << a[i];
	}

	cout << " " << endl;

	cout << "Output elements: " << endl;

	for (int i = 0; i < 5; i++)
	{
		a[i] = len + 1 - b[b[i] - 1];

		cout << a[i];
	}
	*/
}
