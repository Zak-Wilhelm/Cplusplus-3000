#include <iostream>
using namespace std;

class Ride
{
public:
	virtual void bookRide() = 0;
};

class BikeRide : public Ride
{
public:
	void bookRide()
	{
		cout << "Enjoy the Bike ride" << endl;
	}
};

class CarRide : public Ride
{
public:
	void bookRide()
	{
		cout << "Enjoy the car ride" << endl;
	}
};

int main()
{
	Ride* ride;
	BikeRide bike;
	CarRide car;

	ride = &bike;
	ride->bookRide();

	ride = &car;
	ride->bookRide();

	return 0;
}