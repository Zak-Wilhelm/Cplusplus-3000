#include <iostream>
#include <string>
using namespace std;

class ShoppingItem
{
private:
	string item_name;
	float price;
	int quantity;
public:
	void item(string name, float pri, int qty)
	{
		item_name = name;
		price = 0;
		quantity = 0;
		if (pri > 0)
		{
			price = pri;
		}
		if (qty > 0)
		{
			quantity = qty;
		}
	}
	float cost()
	{
		return price * quantity;
	}
	void bill()
	{
		cout << "The total cost of " << item_name << " is: " << cost() << endl;
	}
};

int main()
{
	ShoppingItem item1;
	item1.item("eggs", 5.25, 6);
	item1.bill();

	return 0;
}