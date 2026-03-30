#include <iostream>
using namespace std;

class BankAccount
{
private:
	double balance;
public:
	void setBalance(double balance1)
	{
		balance = balance1;
	}

	bool operator==(BankAccount account2)
	{
		if (balance == account2.balance)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	BankAccount account1;
	BankAccount account2;

	int balance;

	cout << "Balance for account 1: ";
	cin >> balance;
	account1.setBalance(balance);
	cout << "Balance for account 2: ";
	cin >> balance;
	account2.setBalance(balance);

	if (account1 == account2)
	{
		cout << "Both accounts have the same balance." << endl;
	}
	else
	{
		cout << "The account balances are different." << endl;
	}

	return 0;
}