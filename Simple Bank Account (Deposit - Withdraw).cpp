#include <iostream>
using namespace std;

class BankAccount
{
	private:
		float balance = 0;
	public:
		void deposit(float amount)
		{
			if (amount >= 0)
			{
				balance += amount;
			}
			else
			{
				cout << "Error, input to low" << endl;
			}
		}
		void withdraw(float amount)
		{
			if (amount <= balance)
			{
				balance -= amount;
			}
			else
			{
				cout << "Error, Not enough money" << endl;
			}
		}
		void display_balance()
		{
			cout << "Balance: " << balance << endl;
		}
};

int main()
{
	BankAccount account1;

	account1.deposit(1000);
	account1.display_balance();

	account1.withdraw(500);
	account1.display_balance();

	return 0;
}