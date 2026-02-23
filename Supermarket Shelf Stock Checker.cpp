#include <iostream>
#include <string>
using namespace std;

struct product
{
	int code;
	string name;
	int stock;
};

void input_product(product info[][3], int aisle, int size)
{
	for (int rows = 0; rows < aisle; rows++)
	{
		for (int index = 0; index < size; index++)
		{
			cout << "for product: " << index + 1 << " on aisle: " << rows + 1 << endl;
			cout << "Input the code, name, stock" << endl;
			
			cout << "Code: ";
			cin >> info[rows][index].code;

			cout << "Name: ";
			cin >> info[rows][index].name;

			cout << "Stock: ";
			cin >> info[rows][index].stock;
		}
	}
}

void display_product(product info[][3], int aisle, int size)
{
	for (int rows = 0; rows < aisle; rows++)
	{
		cout << "Shelf Stock Report" << endl;
		for (int index = 0; index < size; index++)
		{
			cout << "for product: " << index + 1 << " on aisle: " << rows + 1 << endl;

			cout << "Code: " << info[rows][index].code << endl;

			cout << "Name: " << info[rows][index].name << endl;

			cout << "Stock: " << info[rows][index].stock << endl;
		}
	}
}

int main()
{
	const int aisle = 2;
	const int size = 3;

	product info[aisle][size];

	input_product(info, aisle, size);
	display_product(info, aisle, size);

	return 0;
}