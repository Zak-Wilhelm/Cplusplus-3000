#include <iostream>
using namespace std;

const int row = 3;
const int column = 4;

void input_temp(int dtemp[][column], int row);
void print_temp(int dtemp[][column], int row);

int main()
{
	int dtemp[row][column];

	input_temp(dtemp, row);
	print_temp(dtemp, row);

	return 0;
}

void input_temp(int dtemp[][column], int row)
{
	cout << "Enter temperatures for 3 cities over 4 days: " << endl;
	for (int irow = 0; irow < row; irow++)
	{
		cout << "City " << irow + 1 << ": " << endl;
		for (int col = 0; col < column; col++)
		{
			cout << "Day " << col + 1 << ": ";
			cin >> dtemp[irow][col];
		}
	}
}
void print_temp(int dtemp[][column], int row)
{
	cout << "Temperature Table: " << endl;
	for (int irow = 0; irow < row; irow++)
	{
		for (int col = 0; col < column; col++)
		{
			cout << dtemp[irow][col] << "\t";
		}
		cout << endl;
	}
}