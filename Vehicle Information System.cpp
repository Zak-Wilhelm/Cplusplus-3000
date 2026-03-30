#include <iostream>
using namespace std;

class Vehicle
{
public:
	void showType()
	{
		cout << "Model";
	}
};

class Car : public Vehicle
{
public:
	void showType()
	{
		cout << "Car";
	}
};

class Bike : public Vehicle
{
public:
	void showType()
	{
		cout << "Bike";
	}
};

int main()
{
	Car car1;
	Bike bike1;

	Vehicle* vehicle1;
	vehicle1 = &car1;
	vehicle1->showType();

	car1.showType();
	bike1.showType();

	return 0;
}