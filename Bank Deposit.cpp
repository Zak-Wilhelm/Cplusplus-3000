#include <iostream>
using namespace std;

struct bank_account
{
	int number;
	int balance;
};

void deposit_money(bank_account& account_ref, int deposit_amount);

int main()
{
	bank_account account;
	int deposit;

	cout << "Input the account number then the balance: ";
	cin >> account.number;
	cin >> account.balance;

	cout << "How much do you want to deposit: ";
	cin >> deposit;

	cout << account.balance << endl;

	deposit_money(account, deposit);

	cout << account.balance << endl;

	return 0;
}

void deposit_money(bank_account& account_ref, int deposit_amount)
{
	account_ref.balance = account_ref.balance + deposit_amount;
	cout << account_ref.balance << endl;
}