#include <iostream>

using namespace std;
int main()
{
	const int size = 5;

	int distance[size];
	for (int index = 0; index < size; index++)
	{
		cin >> distance[index];
	}
	int first_reading = distance[0];
	int last_reading = distance[size - 1];

	return 0;
}