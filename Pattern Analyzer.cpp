#include <iostream>
using namespace std;

int main()
{
	char maint[200];
	cin.getline(maint, 200);
	char pattern[100];
	cin.getline(pattern, 100);
	char checker[100];

	int index = -1;
	int cindex = 0;
	int length = 0;

	for (int numcharp = 0; pattern[numcharp] != '\0'; numcharp++)
	{
		length = numcharp;
	}

	for (int numchar = 0; maint[numchar] != '\0'; numchar++)
	{
		for (int compare = numchar; maint[compare] == pattern[cindex]; compare++)
		{
			checker[cindex] = pattern[cindex];
			cindex++;
			if (checker[length] == pattern[length])
			{
				index = numchar;
			}
		}
		cindex = 0;
		if (index != -1)
		{
			break;
		}
	}
	cout << index;
	return 0;
}