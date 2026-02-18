#include <iostream>
using namespace std;

enum PowerState
{
	off,
	on,
	sleep
};

int main()
{
	PowerState device_state = sleep;

	switch (device_state)
	{
		case off: 
			cout << "Device is turned off";
			break;
		case on:
			cout << "Device is running";
			break;
		case sleep:
			cout << "Device is in power-saving mode";
			break;
	}

	return 0;
}