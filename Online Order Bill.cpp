#include <iostream>
#include <string>
using namespace std;

class Product
{
	public:
		string product_name;
		float product_price;
};

class DiscountedProduct : public Product
{
	public:
		float discount_percentage;
};

int main()
{
	DiscountedProduct product1;
	float final_price;

	product1.product_name = "Headphones";
	product1.product_price = 2500;
	product1.discount_percentage = 15;

	final_price = product1.product_price * (100 - product1.discount_percentage) / 100;

	cout << "Product Name: " << product1.product_name << endl;
	cout << "Product Price: " << product1.product_price << endl;
	cout << "Discount Percenttage: " << product1.discount_percentage << endl;
	cout << "Final Price: " << final_price << endl;

	return 0;
}