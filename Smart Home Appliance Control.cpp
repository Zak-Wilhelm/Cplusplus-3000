#include <iostream>
using namespace std;

class Appliance
{
public:
	virtual void turnOn() = 0;
};

class Fan : public Appliance
{
public:
	void turnOn()
	{
		cout << "Turning on the fan";
	}
};

class AirConditioner : public Appliance
{
public:
	void turnOn()
	{
		cout << "Turning on the AC";
	}
};

int main()
{
	Fan fan1;
	AirConditioner AC;

	fan1.turnOn();
	AC.turnOn();

	return 0;
}