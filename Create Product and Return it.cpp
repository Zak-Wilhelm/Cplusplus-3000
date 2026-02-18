#include <iostream>
using namespace std;

struct product_record
{
	int id;
	float price;
};

product_record create_product(int id, float price);

int main()
{
	int id;
	float price;

	cout << "Input the products id then its price: ";
	cin >> id;
	cin >> price;

	product_record product1 = create_product(id, price);

	cout << "The id is: " << product1.id << endl;
	cout << "The price is: " << product1.price << endl;

	return 0;
}

product_record create_product(int id, float price)
{
	product_record temp_product;
	temp_product.id = id;
	temp_product.price = price;
	return temp_product;
}