#include <iostream>
#include <string>
using namespace std;

enum ATM
{
	deposit,
	withdraw,
	checkbalance,
	Exit
};

int main()
{
	string user_input;
	ATM input_response;

	cout << "Enter Transaction (deposit/ withdraw/ checkbalance/ exit): ";
	cin >> user_input;

	if (user_input == "deposit")
	{
		input_response = deposit;
	}
	else if (user_input == "withdraw")
	{
		input_response = withdraw;
	}
	else if (user_input == "checkbalance")
	{
		input_response = checkbalance;
	}
	else if (user_input == "exit")
	{
		input_response = Exit;
	}
	else
	{
		cout << "Invalid input";
		return 0;
	}

	switch (input_response)
	{
		case deposit:
			cout << "Depositing the money";
			break;
		case withdraw:
			cout << "Withderawing the money";
			break;
		case checkbalance:
			cout << "Checking current balance";
			break;
		case Exit:
			cout << "Exiting ATM";
			break;
	}

	return 0;
}