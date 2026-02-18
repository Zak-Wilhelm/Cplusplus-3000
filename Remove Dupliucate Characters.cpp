#include <iostream>
using namespace std;

int main()
{
	char input[200];
	char unique[200];

	cin.getline(input, 200);

	int uindex = 0;

	for (int input_index = 0; input[input_index] != '\0'; input_index++)
	{
		bool present = false;

		for (int compare = 0; compare < uindex; compare++)
		{
			if (input[input_index] == unique[compare])
			{

				present = true;
				break;
			}
		}

		if (!present)
		{
			unique[uindex] = input[input_index];
			uindex++;
		}
	}

	unique[uindex] = '\0';

	cout << unique;
	return 0;
}