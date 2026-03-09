#include <iostream>
#include <string>
using namespace std;

class Employee
{
	private:
		string name;
		float salary;
	public:
		void setEmployee(string name, float salary);
		void displayemployee();
};

void Employee::setEmployee(string name, float salary)
{
	this->name = name;
	this->salary = salary;
}

void Employee::displayemployee()
{
	cout << "Employee Name: " << name << endl;
	cout << "Employee Salary: " << salary << endl;
}

int main()
{
	Employee employee1;
	string name;
	float price;

	cout << "What is the Employee Name: ";
	getline(cin, name);

	cout << "What is the salary of the Employee: ";
	cin >> price;

	employee1.setEmployee(name, price);
	employee1.displayemployee();

	return 0;
}