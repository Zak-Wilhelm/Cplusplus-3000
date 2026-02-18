#include <iostream>
#include <string>
using namespace std;

enum apptracker
{
	placed,
	cooking,
	ready,
	delievered
};

int main()
{
	string user_input;
	apptracker current_status;
	cout << "What stage is the food in: ";
	cin >> user_input;

	if (user_input == "placed")
	{
		current_status = placed;
	}
	else if (user_input == "cooking")
	{
		current_status = cooking;
	}
	else if (user_input == "ready")
	{
		current_status = ready;
	}
	else if (user_input == "delievered")
	{
		current_status = delievered;
	}
	else
	{
		cout << "invalid input";
		return 0;
	}



	switch (current_status)
	{
		case placed:
			cout << "Your order is in" << endl;
			break;
		case cooking:
			cout << "Your food is being prepared" << endl;
			break;
		case ready:
			cout << "Your food should be here shortly" << endl;
			break;
		case delievered:
			cout << "food delievered" << endl;
			break;
	}

	return 0;
}