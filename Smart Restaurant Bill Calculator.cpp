#include <iostream>
using namespace std;

class BillCalc
{
public:
	int calcBill(int burger_price, int pizza_price)
	{
		return burger_price + pizza_price;
	}
	double calcBill(double food_total, double tax_rate)
	{
		return food_total * (1 + tax_rate);
	}
	double calcBill(double food_total, double tax_rate, double discount)
	{
		return food_total * (1 + tax_rate) - discount;
	}
};

int main()
{
	BillCalc bill1;
	int burger_price = 0;
	int pizza_price = 0;
	double tax_rate = 0;
	double discount = 0;
	double total;

	cout << "Enter Burger Price: ";
	cin >> burger_price;
	cout << "Enter Pizza Price: ";
	cin >> pizza_price;
	cout << "Enter tax Rate: ";
	cin >> tax_rate;
	cout << "Enter discount: ";
	cin >> discount;

	cout << "Subtotal: " << bill1.calcBill(burger_price, pizza_price) << endl;
	total = bill1.calcBill(burger_price, pizza_price);
	cout << "Total - Discount: " << bill1.calcBill(total, tax_rate) << endl;
	cout << "Total: " << bill1.calcBill(total, tax_rate, discount) << endl;

	return 0;
}