#include <iostream>
#include <string>
using namespace std;

class Visitor
{
private:
	int ID;
	string city;
public:
	void setID(int id)
	{
		ID = id;
	}

	void setcity(string city1)
	{
		city = city1;
	}

	int getID()
	{
		return ID;
	}

	string getcity()
	{
		return city;
	}
};

class PremiumVisitor : public Visitor
{
private:
	string name;
	string pass;
	int rides;
	int guests;
	float spending;
	string locker;
public:
	void setname_pass(string name1, string pass1, string locker1)
	{
		name = name1;
		pass = pass1;
		locker = locker1;
	}
	void setrides_guests(int numrides, int numguests, float bill)
	{
		rides = numrides;
		guests = numguests;
		spending = bill;
	}

	void display()
	{
		cout << "Ticket Information" << endl;
		cout << "Name: " << name << endl;
		cout << "Visitor ID: " << getID() << endl;
		cout << "City: " << getcity() << endl;
		cout << "Pass Type: " << pass << endl;
		cout << "Rides: " << rides << endl;
		cout << "Guests: " << guests << endl;
		cout << "Total Spending: " << spending << endl;
		cout << "Locker: " << locker << endl;
		if (guests > 3)
		{
			cout << "Lounge access granted" << endl;
		}
		else
		{
			cout << "Not elgible for lounge" << endl;
		}
		if (spending > 3000)
		{
			cout << "Eligible for food coupon" << endl;
		}
		else
		{
			cout << "Not elgible for food coupon" << endl;
		}
		if (pass == "gold" or pass == "platinum")
		{
			cout << "Eligible for the fast track" << endl;
		}
		else
		{
			cout << "Not elgible for fast track" << endl;
		}
	}
};

int main()
{
	PremiumVisitor visitor1;
	visitor1.setname_pass("Ananya", "gold", "yes");
	visitor1.setrides_guests(8, 4, 4200);
	visitor1.setID(7781);
	visitor1.setcity("Atlanta");

	visitor1.display();

	return 0;
}