#include <iostream>
using namespace std;

int main()
{
	char word[150];
	char compword[150];
	int consecutive = 0;
	int count = 0;
	int index = 0;
	cin >> word;

	for (int length = 0; word[length] != '\0'; length++)
	{
		for (int repeat = length; word[length] == word[repeat]; repeat++)
		{
			count++;
		}
		cout << word[length];
		cout << count;
		while (consecutive < count)
		{
			word[length] = word[length + 1];
			consecutive++;
		}
		length = length + count - 1;
		count = 0;
	}
	return 0;
}