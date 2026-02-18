#include <iostream>
using namespace std;

struct employee_record
{
	int employee_id;
	int salary;
};

void increase_salary(employee_record employee_copy, int bonus_amount);

int main()
{
	employee_record employee;
	int bonus;

	cout << "Input the employees id then their salary: ";
	cin >> employee.employee_id;
	cin >> employee.salary;

	cout << "What is the employees bonus: ";
	cin >> bonus;

	increase_salary(employee, bonus);

	cout << "The salary is: " << employee.salary << endl;

	return 0;
}

void increase_salary(employee_record employee_copy, int bonus_amount)
{
	employee_copy.salary = employee_copy.salary + bonus_amount;
	cout << "The new salary amount is: " << employee_copy.salary << endl;
}