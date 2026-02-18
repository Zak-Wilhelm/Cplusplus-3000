#include <iostream>
using namespace std;

const int row = 3;
const int column = 4;

void input_array(int seats[][column], int row);
void print_array(int seats[][column], int row);

int main()
{
	int seats[row][column];

	input_array(seats, row);
	print_array(seats, row);

	return 0;
}
void input_array(int seats[][column], int row)
{
	for (int irow = 0; irow < row; irow++)
	{
		for (int col = 0; col < column; col++)
		{
			cout << "Who is seating in row " << irow << " column " << col << ": ";
			cin >> seats[irow][col];
		}
	}
}
void print_array(int seats[][column], int row)
{
	for (int irow = 0; irow < row; irow++)
	{
		for (int col = 0; col < column; col++)
		{
			cout << seats[irow][col] << "\t";
		}
		cout << endl;
	}
}