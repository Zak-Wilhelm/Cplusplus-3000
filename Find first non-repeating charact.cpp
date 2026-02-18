#include <iostream>
using namespace std;

int main()
{
	char input[200];
	cin.getline(input, 200);

	char unique = '\0';

	for (int index = 0; input[index] != '\0'; index++)
	{
		int count = 0;

		for (int scan = 0; input[scan] != '\0'; scan++)
		{
			if (input[index] == input[scan])
			{
				count++;
			}

			if (count == 1)
			{
				unique = input[index];
				break;
			}
		}
	}

	if (unique == '\0')
	{
		cout << "None" << endl;
	}
	else
	{
		cout << unique << endl;
	}
	return 0;
}