#include <iostream>
#include <string>
using namespace std;

class Employee
{
	public:
		string employee_name;
		double salary;
};

class Manager : public Employee
{
	public:
		double bonus;
};

int main()
{
	Manager manager1;
	double total;

	manager1.employee_name = "Alice";
	manager1.salary = 50000;
	manager1.bonus = 8000;

	total = manager1.salary + manager1.bonus;

	cout << "Employee Name: " << manager1.employee_name << endl;
	cout << "Salary: " << manager1.salary << endl;
	cout << "Bonus: " << manager1.bonus << endl;
	cout << "Total Income: " << total << endl;

	return 0;
}