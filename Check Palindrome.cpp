#include <iostream>
using namespace std;

int main()
{
	char palin[200];

	cout << "Input any word: ";
	cin >> palin;

	int index = 0;

	while (palin[index] != 0)
	{
		index++;
	}
	index = index - 1;
	int count = 0;

	for (int lindex = 0; palin[lindex] != 0; lindex++)
	{
		if (palin[lindex] != palin[index])
		{
			cout << "Not a Palindrome";
			count++;
			break;
		}
		index--;
	}
	if (count == 0)
	{
		cout << "Palindrome";
	}
	return 0;
}