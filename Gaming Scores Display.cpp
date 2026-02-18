#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int score[size];

	cout << "Enter the score: ";
	for (int index = 0; index < size; index++)
	{
		cin >> score[index];
	}

	cout << "Score: ";
	for (int index = 0; index < size; index++)
	{
		cout << score[index] << "  ";
	}
	return 0;
}