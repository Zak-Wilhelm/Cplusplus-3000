#include <iostream>
using namespace std;

void print_array(int marks[], int size);
int main()
{
	const int size = 5;
	int marks[size] = { 10,20,30,40,50 };

	print_array(marks, size);

	return 0;
}

void print_array(int marks[], int size)
{
	for (int index = 0; index < size; index++)
	{
		cout << marks[index] << " ";
	}
}