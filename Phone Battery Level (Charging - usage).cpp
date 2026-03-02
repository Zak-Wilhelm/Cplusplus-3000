#include <iostream>
using namespace std;

class Phonebattery
{
	private:
		int battery = 50;
	public:
		void charge(int amount)
		{
			if (amount > 100 - battery)
			{
				amount = 100 -  battery;
			}
			battery += amount;
		}
		void usage(int minutes)
		{
			if (minutes >= battery)
			{
				battery = 0;
			}
			else
			{
				battery -= minutes;
			}

		}
		void display_battery()
		{
			cout << "Battery: " << battery << endl;
		}
};

int main()
{
	Phonebattery phone1;

	phone1.charge(46);
	phone1.display_battery();

	phone1.usage(23);
	phone1.display_battery();

	phone1.charge(38);
	phone1.display_battery();

	phone1.usage(101);
	phone1.display_battery();

	return 0;
}