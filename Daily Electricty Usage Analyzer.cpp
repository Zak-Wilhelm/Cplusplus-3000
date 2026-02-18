#include <iostream>
using namespace std;

void ddusage(int units[], int size);
void twusage(int units[], int size);
void adusage(int units[], int size);
void huusage(int units[], int size);
void cdusage(int units[], int size);

int main()
{
	const int size = 7;
	int units[size] = {};
	
	cout << "Input electricity usage: ";
	for (int index = 0; index < size; index++)
	{
		cin >> units[index];
	}

	int choice;
	do
	{
		cout << "Menu Options: " << endl;
		cout << "1. Display Daily usage" << endl;
		cout << "2. Total Weekly Usage" << endl;
		cout << "3. Average Daily Usage" << endl;
		cout << "4. Highest usage value" << endl;
		cout << "5. Days above 10 units" << endl;
		cout << "6. Exit" << endl;
		cin >> choice;
		switch (choice)
		{
			case 1: 
				ddusage(units, size);
				break;
			case 2:
				twusage(units, size);
				break;
			case 3:
				adusage(units, size);
				break;
			case 4:
				huusage(units, size);
				break;
			case 5:
				cdusage(units, size);
				break;
			case 6:
				break;
			default:
				cout << "Invalid Input" << endl;
		}
	} while (choice != 6);
}

void ddusage(int units[], int size)
{
	for (int index = 0; index < size; index++)
	{
		cout << units[index] << " ";
	}
	cout << endl;
}
void twusage(int units[], int size)
{
	int total = 0;
	for (int index = 0; index < size; index++)
	{
		total = total + units[index];
	}
	cout << "The total usage is: " << total << endl;
}
void adusage(int units[], int size)
{
	float average = 0;
	for (int index = 0; index < size; index++)
	{
		average = average + units[index];
	}
	cout << "The average usage is: " << average/size << endl;
}
void huusage(int units[], int size)
{
	int husage = 0;
	for (int index = 0; index < size; index++)
	{
		if (units[index] > husage)
		{
			husage = units[index];
		}
	}
	cout << "The highest usage is: " << husage << endl;
}
void cdusage(int units[], int size)
{
	int count = 0;
	for (int index = 0; index < size; index++)
	{
		if (units[index] > 10)
		{
			count = count + 1;
		}
	}
	cout << "The days with usage above 10 units are: " << count << endl;
}