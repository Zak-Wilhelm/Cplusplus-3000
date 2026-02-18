#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int cinema[size];

	cout << "Enter the seats: ";
	for (int index = 0; index < size; index++)
	{
		cin >> cinema[index];
	}

	int change;
	cout << "Enter the new second seat value to be updated: ";
	cin >> change;
	cinema[1] = change;

	cout << "Updated seats: ";
	for (int index = 0; index < size; index++)
	{
		cout << cinema[index] << "  ";
	}
	return 0;
}