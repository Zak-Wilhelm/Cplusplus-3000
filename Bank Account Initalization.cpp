#include <iostream>
using namespace std;

class BankAccount
{
	private:
		float balance;
	public:
		BankAccount(float bal);
		void displayBalance();
};

BankAccount::BankAccount(float bal)
{
	balance = bal;
}

void BankAccount::displayBalance()
{
	cout << "Balance: " << balance << endl;
}

int main()
{
	BankAccount Account1(500);
	BankAccount Account2(1200);
	BankAccount Account3(50);

	Account1.displayBalance();
	Account2.displayBalance();
	Account3.displayBalance();

	return 0;
}