#include <iostream>
using namespace std;

const int row = 3;
const int column = 4;

void read_array(int sales[][column], int row);
void high_mark(int sales[][column], int row);

int main()
{
	int sales[row][column];

	read_array(sales, row);
	high_mark(sales, row);

	return 0;
}

void read_array(int sales[][column], int row)
{
	for (int irow = 0; irow < row; irow++)
	{
		cout << "Cashiers " << irow + 1 << ": " << endl;
		for (int col = 0; col < column; col++)
		{
			cout << "Days " << col + 1 << ": ";
			cout << "Enter Cashiers value for the day: ";
			cin >> sales [irow] [col] ;
		}
	}
}

void high_mark(int sales[][column], int row)
{
	int high = 0;
	int total = 0;
	int bday = 0;
	for (int irow = 0; irow < row; irow++)
	{
		for (int col = 0; col < column; col++)
		{
			if (high < sales[irow][col])
			{
				high = sales[irow][col];
				bday = col;
			}
			total = total + sales[irow][col];
		}
		cout << "Cashiers " << irow + 1 << " highest day is: " << high << endl;
		cout << "Cashiers " << irow + 1 << " total is: " << total << endl;
		switch (bday + 1)
		{
			case 1:
				cout << "Monday was their best day" << endl;
				break;
			case 2:
				cout << "Tuesday was their best day" << endl;
				break;
			case 3:
				cout << "Wednesday was their best day" << endl;
				break;
			case 4:
				cout << "Thursday was their best day" << endl;
				break;
		}
		high = 0;
		total = 0;
		bday = 0;
	}
}