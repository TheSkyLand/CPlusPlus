#include <iostream>
#include <vector>
using namespace std;


int main()
{
	int len{};
	string input;

	cin >> len;
	cin >> input;

	vector<int> s(len);
	s.push_back(0);
	

	for (int i = 0; i < len; i++)
	{
		if (input[i] == 'L')
		{
			for (int j = len; j > 0; j--)
			{
				s[j] = s[j - 1];
			}
			s[0] = i;
;		}
		if (input[i] == 'R')
		{
			s.insert(s.begin() + 1, i);
		}
	}

	for (int i = len; i > len; i--)
	{
		cout << s[i];
	}


}
