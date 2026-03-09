#include <iostream>
using namespace std;

class EWallet
{
	private:
		int balance;
	public:
		void set_balance(int bal)
		{
			if (bal >= 0)
			{
				balance = bal;
			}
			else
			{
				cout << "Invalid Ballance" << endl;
			}
		}
		void spend(int amount)
		{
			if (amount > 0 && amount <= balance)
			{
				balance -= amount;
			}
			else
			{
				cout << "Invalid input" << endl;
			}
		}
		int get_balance()
		{
			return balance;
		}
};
int main()
{
	EWallet wallet;

	int balance, amount;
	cin >> balance;
	cin >> amount;
	wallet.set_balance(balance);
	wallet.spend(amount);

	cout << "Final Balance: " << wallet.get_balance() << endl;

	return 0;
}