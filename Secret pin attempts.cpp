#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int array_pin[size];

	for (int index = 0; index < size; index++)
	{
		cin >> array_pin[index];
	}
	int third_attempt = array_pin[2];
	return 0;
}