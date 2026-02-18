#include <iostream>
using namespace std;

void check_array(int carray[], int size);

int main()
{
	const int size = 5;
	int carray[size] = {7, 8, 9, 10, 11};

	check_array(carray, size);

	return 0;
}

void check_array(int carray[], int size)
{
	int gnum;
	cout << "Input a number: ";
	cin >> gnum;
	bool found = false;

	for (int index = 0; index < size; index++)
	{
		if (gnum == carray[index])
		{
			found = true;
			break;
		}
	}
	if (found)
	{
		cout << "Found" << endl;
	}
	else {
		cout << "Not Found" << endl;
	}
}