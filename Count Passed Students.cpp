#include <iostream>
using namespace std;

void passed(int marks[], int size);

int main()
{
	const int size = 5;
	int marks[size] = { 30, 40, 50 ,60, 70 };

	passed(marks, size);

	return 0;
}

void passed(int marks[], int size)
{
	int count = 0;
	for (int index = 0; index < size; index++)
	{
		if (marks[index] >= 40)
		{
			count = count + 1;
		}
	}
	cout << "Number of Students that passed: " << count << endl;
}