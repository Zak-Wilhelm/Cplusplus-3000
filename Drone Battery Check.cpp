#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int drone[size];
	int count = 0;

	cout << "Battery Inputs: ";
	for (int index = 0; index < size; index++)
	{
		cin >> drone[index];
	}

	cout << "Battery: ";
	for (int index = 0; index < size; index++)
	{
		cout << drone[index] << "  ";
		if (drone[index] < 20)
		{
			count++;
		}
	}
	cout << endl << "Low Readings: " << count;
	return 0;
}