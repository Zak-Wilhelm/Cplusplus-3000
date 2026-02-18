#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int tracker[size];
	int total = 0;

	cout << "Input each steps per hour: ";
	for (int index = 0; index < size; index++)
	{
		cin >> tracker[index];
	}

	cout << "Steps: ";
	for (int index = 0; index < size; index++)
	{
		cout << tracker[index] << "  ";
		total = total + tracker[index];
	}
	cout << endl << "Total: " << total;
	return 0;
}