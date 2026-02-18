#include <iostream>
using namespace std;

int main()
{
	char firstword[200];
	char secword[200];

	cin.getline(firstword, 200);
	cin.getline(secword, 200);

	int count = 0;
	int secount = 0;
	int compare = 0;
	int seccompare = 0;


	for (int length = 0; firstword[length] != '\0'; length++)
	{
		for (int index = -1; firstword[index] != '\0'; index++)
		{
			if (firstword[compare] == ' ')
			{
				compare++;
			}
			if (firstword[compare] == firstword[index])
			{
				count++;
			}
		}

		for (int sindex = -1; secword[sindex] != '\0'; sindex++)
		{
			if (secword[seccompare] == ' ')
			{
				seccompare++;
			}
			if (secword[seccompare] == secword[sindex])
			{
				secount++;
			}
		}

		compare++;
		seccompare++;
	}
	if (count != secount)
	{
		cout << "Not an Anagram";
	}
	else
	{
		cout << "Anagram";
	}

	return 0;
}