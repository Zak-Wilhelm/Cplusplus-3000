#include <iostream>
using namespace std;

void darray(int marks[], int size);
void tarray(int marks[], int size);
void aarray(int marks[], int size);
void parray(int marks[], int size);
void harray(int marks[], int size);

int main()
{
	const int size = 5;
	int marks[size] = {};

	for (int index = 0; index < size; index++)
	{
		cout << "Input students marks: ";
		cin >> marks[index];
	}
	int choice;
	do
	{
		cout << "Menu Options: " << endl;
		cout << "1. Display all marks" << endl;
		cout << "2. Find Total marks" << endl;
		cout << "3. Count passed marks" << endl;
		cout << "4. Count passed students (>= 40)" << endl;
		cout << "5. Find Highest mark" << endl;
		cout << "6. Exit" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			darray(marks, size);
			break;
		case 2:
			tarray(marks, size);
			break;
		case 3:
			aarray(marks, size);
			break;
		case 4:
			parray(marks, size);
			break;
		case 5:
			harray(marks, size);
			break;
		case 6:
			break;
		default:
			cout << "Invalid input" << endl;
		}
	} while (choice != 6);
}

void darray(int marks[], int size)
{
	for (int index = 0; index < size; index++)
	{
		cout << marks[index] << " ";
	}
	cout << endl;
}

void tarray(int marks[], int size)
{
	int total = 0;
	for (int index = 0; index < size; index++)
	{
		total = total + marks[index];
	}
	cout << "The total is: " << total << endl;
}

void aarray(int marks[], int size)
{
	float average = 0;
	for (int index = 0; index < size; index++)
	{
		average = average + marks[index];
	}
	cout << "The average is: " << average/size << endl;
}

void parray(int marks[], int size)
{
	int count = 0;
	for (int index = 0; index < size; index++)
	{
		if (marks[index] >= 40)
		{
			count = count + 1;
		}
	}
	cout << "Total number of passing students is: " << count << endl;
}

void harray(int marks[], int size)
{
	int hmark = 0;
	for (int index = 0; index < size; index++)
	{
		if (marks[index] > hmark)
		{
			hmark = marks[index];
		}
	}
	cout << "The highest mark is: " << hmark << endl;
}