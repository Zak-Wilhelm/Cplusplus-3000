#include <iostream>
using namespace std;

const int row = 3;
const int column = 4;

void read_array(int marks[][column], int row);
void high_mark(int marks[][column], int row);

int main()
{
	int marks[row][column];

	read_array(marks, row);
	high_mark(marks, row);

	return 0;
}

void read_array(int marks[][column], int row)
{
	for (int irow = 0; irow < row; irow++)
	{
		cout << "Student " << irow + 1 << ": " << endl;
		for (int col = 0; col < column; col++)
		{
			cout << "Subject " << col + 1 << ": ";
			cout << "Enter value for marks the students: ";
			cin >> marks[irow][col];
		}
	}
}

void high_mark(int marks[][column], int row)
{
	int high = 0;
	for (int irow = 0; irow < row; irow++)
	{
		for (int col = 0; col < column; col++)
		{
			if (high < marks[irow][col])
			{
				high = marks[irow][col];
			}
		}
		cout << "Student " << irow << " highest mark is: " << high << endl;
		high = 0;
	}
}