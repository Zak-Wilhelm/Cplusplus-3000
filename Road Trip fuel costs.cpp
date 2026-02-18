#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int highcost[size];
	int high_fuel = 0;

	cout << "Input fuel cost: ";
	for (int index = 0; index < size; index++)
	{
		cin >> highcost[index];
	}

	cout << "Fuel Costs: ";
	for (int index = 0; index < size; index++)
	{
		cout << highcost[index] << "  ";
		if (high_fuel < highcost[index])
		{
			high_fuel = highcost[index];
		}
	}
	cout << endl << "Highest fuel: " << high_fuel;
	return 0;
}