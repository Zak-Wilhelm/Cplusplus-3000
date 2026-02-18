#include <iostream>
using namespace std;

int main()
{
	char input[200];
	cin.getline(input, 200);

	for (int index = 0; input[index] != '\0'; index++)
	{
		if (input[index] == ' ')
		{
			input[index] = '-';
		}
	}
	cout << input;
	return 0;
}