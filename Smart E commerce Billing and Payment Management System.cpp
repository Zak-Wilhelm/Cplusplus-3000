#include <iostream>
#include <string>
using namespace std;

class BillCalculator
{
public:
	int calculateBill(int product_price, int shipping)
	{
		return product_price + shipping);
	}

	double calculateBill(double price, double tax)
	{
		return price * (1 + tax);
	}

	double calculateBill(double price, double tax, double discount)
	{
		return price * (1 + tax) - discount;
	}
};

class PaymentMethod
{
private:
	string customer;
	double amount;
	int id;
public:
	virtual void pay() = 0;

	void setDetails(string name, int tran_id)
	{
		customer = name;
		id = tran_id;
	}

	void setAmount(double cost)
	{
		amount = cost;
	}

	string getName()
	{
		return customer;
	}

	double getAmount()
	{
		return amount;
	}

	int getID()
	{
		return id;
	}
};

class UPIPayment : public PaymentMethod
{
private:
	int UPI_ID;
public:
	void pay()
	{
		cout << "Using UPI to pay" << endl;
	}

	void setID(int ID)
	{
		UPI_ID = ID;
	}

	int getID()
	{
		return UPI_ID;
	}
};

class CardPayment : public PaymentMethod
{
private:
	string bank_name;
public:
	void pay()
	{
		cout << "Using card to pay" << endl;
	}

	void setBname(string name)
	{
		bank_name = name;
	}

	string getBName()
	{
		return bank_name;
	}
};

class WalletPayment : public PaymentMethod
{
private:
	string wallet_name;
public:
	void pay()
	{
		cout << "Using cash to pay" << endl;
	}

	void setWallet(string name)
	{
		wallet_name = name;
	}

	string getWallet()
	{
		return wallet_name;
	}
};

int main()
{
	BillCalculator bill;

	string name, wallet_name, bank_name;
	double tax, total = 0, price;
	int id, discount, amount, shipping, UPI;

	cout << "What is your name: ";
	getline( cin, name);

	cout << "What is the id: ";
	cin >> id;

	cout << "What is the amount: ";
	cin >> amount;

	cout << "What is the discount: ";
	cin >> discount;

	cout << "What is the tax: ";
	cin >> tax;

	cout << "What is the shipping: ";
	cin >> shipping;

	cout << "what is the bank name: ";
	getline(cin, bank_name);

	cout << "what is the wallet name: ";
	getline(cin, wallet_name);

	cout << "What is the UPI ID: ";
	cin >>  UPI;

	UPIPayment upipay;
	WalletPayment walpay;
	CardPayment carpay;
	PaymentMethod* paymet;

	upipay.setID(UPI);
	walpay.setWallet(wallet_name);
	carpay.setBname(bank_name);
	upipay.setDetails(name, id);

	cout << "Bill Results: " << endl;
	cout << "Customer Name: " << upipay.getName() << endl;
	price = bill.calculateBill(amount, shipping);
	cout << "The total with shipping(before tax and discount): " << price << endl;

	total = bill.calculateBill(price, tax);
	cout << "Total after tax and shipping without discount: " << total << endl;

	total = bill.calculateBill(price, tax, discount);
	cout << "The total with everything applied: " << total << endl;

	upipay.setAmount(total);

	cout << "Payment Details" << endl;
	cout << "Customer Name: " << upipay.getName() << endl;
	cout << "Transaction ID: " << upipay.getID() << endl;
	cout << "Amount: " << upipay.getAmount() << endl;
	cout << "Payment Method: UPI" << endl;
	cout << upipay.getID();
	paymet = &upipay;
	paymet->pay();
	
	cout << "Payment Details" << endl;
	cout << "Customer Name: " << upipay.getName() << endl;
	cout << "Transaction ID: " << upipay.getID() << endl;
	cout << "Amount: " << upipay.getAmount() << endl;
	cout << "Payment Method: Wallet" << endl;
	cout << walpay.getWallet();
	paymet = &walpay;
	paymet->pay();

	cout << "Payment Details" << endl;
	cout << "Customer Name: " << upipay.getName() << endl;
	cout << "Transaction ID: " << upipay.getID() << endl;
	cout << "Amount: " << upipay.getAmount() << endl;
	cout << "Payment Method: Card" << endl;
	cout << carpay.getBName();
	paymet = &carpay;
	paymet->pay();

	return 0;
}