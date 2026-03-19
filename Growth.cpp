#include <iostream>
#include <vector>;
using namespace std;
int main()
{
	int arraySize = 4;
	std::vector<int> input(arraySize);

	std::vector<int> test = {2, -1, 8, 4};
	int testSize = test.size();

	std::vector<int> sorted(arraySize);

	int swap = 0;
	int current = 0;
	int counter = 0;
	bool isSorted = false;

	for (int i = 0; i < testSize; i++) {
		sorted[i] = test[i];
	}

	while (current < testSize && isSorted == false) {

		//sort
		for (int i = 0; i < testSize - 1; i++) {
			if (sorted[i] > sorted[i + 1])
			{
				swap = sorted[i];
				sorted[i] = sorted[i + 1];
				sorted[i + 1] = swap;
			}
		}

		//check if sorted
		for (int i = 0; i < testSize; i++) {
			if (test[i] < test[i + 1] && i >= testSize - 1)
			{
				isSorted = true;
			}
			else if (test[i] > test[i + 1]) {
				break;
			}
		}
		current++;
	}

	int inner = 0;
		while (inner < testSize) {
		for (int j = inner; j < testSize - 1; j++)
		{
			if (test[j] > test[j + 1])
			{
				cout << test[j];
				counter++;
			}
		}
		cout << endl;
		inner++;
	}
	cout << counter;
	for (int i = 0; i < testSize; i++)
	{
		cout << sorted[i];
	}
}


