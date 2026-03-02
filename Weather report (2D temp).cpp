#include <iostream>
using namespace std;

class WeatherReport
{
	private:
		float temp[7][2];
	public:
		void input_temp()
		{
			for (int day = 0; day < 7; day++)
			{
				cout << "day " << day + 1 << ": " << endl;
				for (int time = 0; time < 2; time++)
				{
					cout << "What is the temperature in time " << time + 1 << ": " << endl;
					cin >> temp[day][time];
				}
			}
		}
		void display_temp()
		{
			for (int day = 0; day < 7; day++)
			{
				cout << "Day " << day + 1 << ": " << endl;
				for (int time = 0; time < 2; time++)
				{
					cout << "Time " << time + 1 << ": " << temp[day][time] << "  ";
				}
				cout << endl;
			}
		}
		void hot_day()
		{
			int high = 0;
			int highday = 0;
			for (int day = 0; day < 7; day++)
			{
				int total_day = 0;
				for (int time = 0; time < 2; time++)
				{
					total_day += temp[day][time];
				}
				if (total_day / 2 > high)
				{
					high = total_day / 2;
					highday = day + 1;
				}
			}
			cout << "Highest Average: " << high << endl;
			cout << "Day with Highest Average: " << highday << endl;
		}
};

int main()
{
	WeatherReport daily1;
	daily1.input_temp();
	daily1.display_temp();
	daily1.hot_day();

	return 0;
}