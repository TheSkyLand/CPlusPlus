#include <iostream>
#include <vector>
using namespace std;


//станислав олгеович больше не задавайте такие задания
int main()
{
	cout << "enter size: " << endl;

	int SIZE;
	cin >> SIZE;

	cout << SIZE;

	std::vector<int> arr(SIZE);
	std::vector<int> arrB(SIZE);

	for (int i = 0; i < SIZE; i++) {
		cout << "number: "; 
		cin >> arr[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		int index = arr[i] - 1;
		arrB[index] = SIZE - i;
	}

	for (int i = 0; i < SIZE; i++) {
		cout << arrB[i];
	}

}
