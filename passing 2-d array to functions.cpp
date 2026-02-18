#include <iostream>
using namespace std;

const int row = 2;
const int column = 3;

void read_array(int marks[][column], int row);
void print_array(int marks[][column], int row);

int main()
{
	int marks[row][column];

	read_array(marks, row);
	print_array(marks, row);

	return 0;
}

void read_array(int marks[][column], int row)
{
	for (int irow = 0; irow < row; irow++)
	{
		for (int col = 0; col < column; col++)
		{
			cout << "Enter value for marks: ";
			cin >> marks[irow][col];
		}
	}
}

void print_array(int marks[][column], int row)
{
	for (int irow = 0; irow < row; irow++)
	{
		for (int col = 0; col < column; col++)
		{
			cout << marks[irow][col] << "  ";
		}
		cout << endl;
	}
}