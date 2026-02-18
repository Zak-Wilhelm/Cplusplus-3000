#include <iostream>
using namespace std;

void ten_array(int gten_array[], int size);

int main()
{
	const int size = 5;
	int gten_arrray[size] = { 5, 12, 8, 20, 3 };

	ten_array(gten_arrray, size);

	return 0;
}

void ten_array(int gten_array[], int size)
{
	for (int index = 0; index < size; index++)
	{
		if (gten_array[index] <= 10)
		{
			gten_array[index] = 10;
		}
		cout << gten_array[index] << " ";
	}
}