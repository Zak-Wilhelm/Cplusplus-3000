#include <iostream>
using namespace std;

void even_array(int numbers[], int size);

int main()
{
	const int size = 5;
	int numbers[size] = { 10, 15, 20, 25, 30};

	even_array(numbers, size);

	return 0;
}

void even_array(int numbers[], int size)
{
	for (int index = 0; index < size; index++)
	{
		if (numbers[index] % 2 == 0)
		{
			cout << numbers[index] << " ";
		}
	}
}