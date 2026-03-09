#include <iostream>
#include <string>
using namespace std;

class Product
{
	private:
		string product_name;
		float product_price;
	public:
		void setProduct(string product_name, float product_price);
		void displayProduct();
};

void Product::setProduct(string product_name, float product_price)
{
	this->product_name = product_name;
	this->product_price = product_price;
}

void Product::displayProduct()
{
	cout << "Product Name: " << product_name << endl;
	cout << "Product Price: " << product_price << endl;
}

int main()
{
	Product product1;

	string product_name;
	float product_price;

	cout << "What is the name of the product: ";
	getline(cin, product_name);
	cout << "What is the price of the product: ";
	cin >> product_price;

	product1.setProduct(product_name, product_price);
	product1.displayProduct();

	return 0;
}