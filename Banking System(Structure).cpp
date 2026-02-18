#include <iostream>
using namespace std;

struct accounts
{
	int number;
	char name[200];
	float balance;
};

int main()
{
	accounts account1;

	cout << "Input your account number, name, and balance: ";
	cin >> account1.number;
	cin.ignore();
	cin.getline(account1.name, 200);
	cin >> account1.balance;

	cout << "Your account number is: " << account1.number << endl;
	cout << "The name on your account is: " << account1.name << endl;
	cout << "Your account balance is: " << account1.balance << endl;

	return 0;
}