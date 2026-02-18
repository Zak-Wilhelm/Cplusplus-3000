#include <iostream>
#include <string>
using namespace std;

int main()
{
	char username[200];

	cout << "Input a word or phrase: ";
	cin.getline(username, 200);

	int index = 0;
	while (username[index] != '\0')
	{
		index++;
	}

	index = index - 1;

	for (int lenindex = 0; username[lenindex] != '\0'; lenindex++)
	{
		cout << username[index];
		index--;
	}
	return 0;
}