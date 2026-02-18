#include <iostream>
using namespace std;

const int rowa = 2;
const int columna = 3;

const int rowb = 2;
const int columnb = 3;

void input_array(int matrix[][columna], int rowa);
void copy_array(int matrix[][columna], int rowa);

int main()
{
	int matrix[rowa][columna];

	input_array(matrix, rowa);
	copy_array(matrix, rowa);

	return 0;
}
void input_array( int matrix[][columna], int rowa)
{
	for (int irow = 0; irow < rowa; irow++)
	{
		for (int col = 0; col < columna; col++)
		{
			cout << "Enter value for matrix row: " << irow << " column: " << col << " ";
			cin >> matrix[irow][col];
		}
	}
}

void copy_array(int matrix[][columna], int rowa)
{
	int matrixb[rowb][columnb];
	for (int irow = 0; irow < rowa; irow++)
	{
		for (int col = 0; col < columna; col++)
		{
			matrixb[irow][col] = matrix[irow][col];
		}
	}
	for (int irow = 0; irow < rowb; irow++)
	{
		for (int col = 0; col < columnb; col++)
		{
			cout << matrixb[irow][col] << "\t";
		}
		cout << endl;
	}
}