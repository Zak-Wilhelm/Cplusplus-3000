#include <iostream>
using namespace std;

class OrderStatus
{
public:
	virtual void showStatus()
	{
		cout << "Status of order";
	}
};

class Preparing : public OrderStatus
{
public:
	void showStatus()
	{
		cout << "Preparing";
	}
};

class OutforDelivery : public OrderStatus
{
public:
	void showStatus()
	{
		cout << "Out for Delivery";
	}
};

class Delievered : public OrderStatus
{
public:
	void showStatus()
	{
		cout << "Delievered";
	}
};

int main()
{
	OrderStatus* order;
	Preparing prepare;
	OutforDelivery delievery;
	Delievered delieve;

	order = &prepare;
	order->showStatus();

	order = &delievery;
	order->showStatus();

	order = &delieve;
	order->showStatus();

	return 0;
}