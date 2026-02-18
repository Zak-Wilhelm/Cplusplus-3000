#include <iostream>
using namespace std;

int main()
{
	char sentence[200];

	cin.getline(sentence, 200);

	int length = 0;
	int position = 0;
	char word[20];
	char lword[20];
	int index = 0;
	int total_words = 1;

	for (int characters = 0; sentence[characters] != '\0'; characters++)
	{
		if (sentence[characters] == ' ')
		{
			total_words++;
		}
	}

	for (int words = 0; words < total_words; words++)
	{
		for (int characters = 1; sentence[position] != ' ' && sentence[position] != '\0'; characters++)
		{
			word[index] = sentence[position];
			index++;
			if (characters > length)
			{
				length = characters;
				word[index] = '\0';
				for (int tindex = 0; word[tindex] != '\0'; tindex++)
				{
					lword[tindex] = word[tindex];
				}
				lword[index] = '\0';
			}
			position++;
		}
		index = 0;
		position++;
	}
	cout << lword << endl;
	cout << length;
	return 0;
}