#include <iostream>
using namespace std;

int main()
{
	char text[300];

	cout << "Enter a string: ";
	cin.getline(text, 300);

	bool visited[256] = { false };

	int index = 0;
	int endex = 0;
	int max = 0;

	while (text[endex] != '\0')
	{
		char current_char = text[endex];

		while (visited[current_char] == true)
		{
			char left_char = text[index];
			visited[left_char] = false;
			index++;
		}

		visited[current_char] = true;

		int current_length = endex - index + 1;
		if (current_length > max)
		{
			max = current_length;
		}
		endex++;
	}
	cout << "Longest length without repeating characters = " << max << endl;

	return 0;
}