#include <iostream>
using namespace std;

class Thermostat
{
	private:
		int temperature;
	public:
		Thermostat()
		{
			temperature = 24;
		}
		void set_temp(int temp)
		{
			if (temp >= 16 && temp <= 30)
			{
				temperature = temp;
			}
			else
			{
				cout << "Invalid Temp" << endl;
			}
		}
		int get_temp()
		{
			return temperature;;
		}
};

int main()
{
	Thermostat temper;

	int temp;
	cin >> temp;

	temper.set_temp(temp);

	cout << "Temperature: " << temper.get_temp() << endl;

	return 0;
}