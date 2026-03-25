#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	int age;
	string gender;
public:
	void setage(int age1)
	{
		age = age1;
	}

	int getage()
	{
		return age;
	}

	void setgender(string gender1)
	{
		gender = gender1;
	}

	string getgender()
	{
		return gender;
	}
};

class Patient : public Person
{
private:
	string patient_name;
	string disease_name;
	string doctor_name;
	int room_number;
	int days;
	float bill;
public:
	void setnames(string patname, string disname, string docname)
	{
		patient_name = patname;
		disease_name = disname;
		doctor_name = docname;
	}

	void setstay(int roomnum, int dates, float bills)
	{
		room_number = roomnum;
		days = dates;
		bill = bills;
	}

	void display()
	{
		cout << "Patient Details" << endl;
		cout << "Patient Name: " << patient_name << endl;
		cout << "Age: " << getage() << endl;
		cout << "Gender: " << getgender() << endl;
		cout << "Disease Name: " << disease_name << endl;
		cout << "Doctor Name: " << doctor_name << endl;
		cout << "Room Number: " << room_number << endl;
		if (days > 7)
		{
			cout << "Long Stay" << endl;
		}
		else
		{
			cout << "Short Stay" << endl;
		}
		cout << "Length of Stay: " << days << endl;
		if (bill >= 5000)
		{
			cout << "High Bill Case" << endl;
		}
		else
		{
			cout << "Regular Bill Case" << endl;
		}
		cout << "Bill: " << bill << endl;
	}
};

int main()
{
	Patient patient1;

	patient1.setnames("Rahul", "Pneumonia", "Dr. Smith");
	patient1.setgender("male");
	patient1.setage(52);
	patient1.setstay(305, 10, 8500);
	patient1.display();

	return 0;
}