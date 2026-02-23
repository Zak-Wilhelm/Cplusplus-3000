#include <iostream>
#include <string>
using namespace std;

enum  order_status
{
	placed,
	preparing,
	out_for_delievery,
	delievered,
};

struct order
{
	int id;
	string cust_name;
	float total;
	order_status status;
};

int main()
{
	order order1;
	int point;
	cout << "Input the id, cust_name, and total for the order: ";
	cin >> order1.id;
	cin >> order1.cust_name;
	cin >> order1.total;
	
	cout << "For status input 0 if place, 1 if preparing, 2 if out for delievery, or 3 if delievered: ";
	cin >> point;

	if (point == 0)
	{
		order1.status = placed;
	}
	else if (point == 1)
	{
		order1.status = preparing;
	}
	else if (point == 2)
	{
		order1.status = out_for_delievery;
	}
	else if (point == 3)
	{
		order1.status = delievered;
	}

	cout << "Order Summary" << endl;
	cout << "Order Id: " << order1.id << endl;
	cout << "Customer: " << order1.cust_name << endl;
	cout << "Total Amount: " << order1.total << endl;

	if (order1.status == placed)
	{
		cout << "Placed";
	}
	else if (order1.status == preparing)
	{
		cout << "Preparing";
	}
	else if (order1.status == out_for_delievery)
	{
		cout << "Out for delievery";
	}
	else if (order1.status == delievered)
	{
		cout << "delievered";
	}

	return 0;
}