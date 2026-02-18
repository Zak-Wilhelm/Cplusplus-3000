#include <iostream>
using namespace std;

const int row = 3;
const int column = 4;

void read_array(int attend[][column], int row);
void attendance(int attend[][column], int row);
void output_array(int attend[][column], int row);
void summary_array(int attend[][column], int row);

int main()
{
	int attend[row][column];

	read_array(attend, row);
	output_array(attend, row);
	summary_array(attend,row);
	attendance(attend, row);

	return 0;
}

void read_array(int attend[][column], int row)
{
	for (int irow = 0; irow < row; irow++)
	{
		cout << "Student " << irow + 1 << ": " << endl;
		for (int col = 0; col < column; col++)
		{
			cout << "Days " << col + 1 << ": ";
			cout << "Enter Students attendance for the day: ";
			cin >> attend[irow][col];
		}
	}
}

void output_array(int attend[][column], int row)
{
	for (int irow = 0; irow < row; irow++)
	{
		for (int col = 0; col < column; col++)
		{
			cout << attend[irow][col] << "\t";
		}
		cout << endl;
	}
}

void summary_array(int attend[][column], int row)
{
	cout << "Student Summary: " << endl;
	int absences = 0;
	for (int irow = 0; irow < row; irow++)
	{
		for (int col = 0; col < column; col++)
		{
			if (attend[irow][col] == 0)
			{
				absences = absences + 1;
			}
		}
		cout << "Student " << irow + 1 << ": Present: " << 4 - absences << " Absent: " << absences << endl;
		if (absences >= 2)
		{
			cout << "Warning: Student " << irow + 1 << " has " << absences << " absences!" << endl;
		}
		absences = 0;
	}

	int high = 0;
	int temphigh = 0;
	int count = 0;
	for (int col = 0; col < column; col++)
	{
		for (int irow = 0; irow < row; irow++)
		{
			if (attend[irow][col] == 0)
			{
				temphigh = temphigh + 1;
			}
		}
		if (temphigh > high)
		{
			high = temphigh;
			count = col;
		}
		temphigh = 0;
	}
	switch (count + 1)
	{
	case 1:
		cout << "Monday was the most skipped day" << endl;
		break;
	case 2:
		cout << "Tuesday was the most skipped day" << endl;
		break;
	case 3:
		cout << "Wednesday was the most skipped day" << endl;
		break;
	case 4:
		cout << "Thursday was the most skipped day" << endl;
		break;
	}
	cout << "Total days skipped: " << high << endl;
}

void attendance(int attend[][column], int row)
{
	int temptotal = 0;
	int total = 0;
	int count = 0;
	for (int irow = 0; irow < row; irow++)
	{
		for (int col = 0; col < column; col++)
		{
			if (attend[irow][col] == 0)
			{
				temptotal = temptotal + 1;
			}
			if (temptotal > total)
			{
				total = temptotal;
				count = irow;
			}
		}
		temptotal = 0;
	}
	cout << "Student " << count + 1 << " skipped the most" << endl;
}
