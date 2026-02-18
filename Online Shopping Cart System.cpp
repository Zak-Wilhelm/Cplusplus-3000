#include <iostream>
using namespace std;

struct cart
{
	int id;
	char name[100];
	float price;
	int quantity;
};

int main()
{
	cart product[5];

	for (int index = 0; index < 5; index++)
	{
		cout << "Input the products id, name, price and quantity selected of product " << index + 1 << ": ";
		cin >> product[index].id;
		cin.ignore();
		cin.getline(product[index].name, 100);
		cin >> product[index].price;
		cin >> product[index].quantity;

		for (int index = 0; index < 5; index++)
		{
			cout << "Product " << index + 1 << ": " << endl;
			cout << "ID = " << product[index].id << endl;
			cout << "Name = " << product[index].name << endl;
			cout << "Price = " << product[index].price << endl;
			cout << "Quantity = " << product[index].quantity << endl;
		}

		return 0;
	}