#include <iostream>
using namespace std;

enum HomeController
{
	Home = 1,
	Away = 2,
	Night = 3,
	Vacation = 4,
};

int main()
{
	int user_input;
	HomeController state = Home;

	cout << "What mode do you want the home controller to be set on (1 for home, 2 for away, 3 for night, 4 for vacation): ";
	cin >> user_input;

	if (user_input == 1)
	{
		state = Home;
	}
	else if (user_input == 2)
	{
		state = Away;
	}
	else if (user_input == 3)
	{
		state = Night;
	}
	else if (user_input == 4)
	{
		state = Vacation;
	}
	else
	{
		cout << "Invalid input";
		return 0;
	}

	switch (state)
	{
	case Home:
		cout << "Home Mode: Normal settings activated";
		break;
	case Away:
		cout << "Away Mode: Security system armed";
		break;
	case Night:
		cout << "Night Mode: Lights dimmed, doors locked";
		break;
	case Vacation:
		cout << "Vacation Mode: Energy Saving + security enabled";
		break;
	}

	return 0;
}