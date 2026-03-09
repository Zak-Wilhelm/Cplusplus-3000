#include <iostream>
#include <string>
using namespace std;

class Laptop
{
	private:
		float laptop_price;
	public:
		Laptop(float price);
		void displayPrice();
};

Laptop::Laptop(float price)
{
	laptop_price = price;
}

void Laptop::displayPrice()
{
	cout << "Price: " << laptop_price << endl;
}

int main()
{
	Laptop laptop1(45000);
	Laptop laptop2(62000);
	Laptop laptop3(81000);

	laptop1.displayPrice();
	laptop2.displayPrice();
	laptop3.displayPrice();

	return 0;
}