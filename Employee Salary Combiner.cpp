#include <iostream>
using namespace std;

class EmployeeSalary
{
private:
	double salary;
public:
	void setSalary(double salary1)
	{
		salary = salary1;
	}

	int operator+(EmployeeSalary salary2)
	{
		return salary + salary2.salary;
	}

	bool operator==(EmployeeSalary salary2)
	{
		if (salary == salary2.salary)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>(EmployeeSalary salary2)
	{
		if (salary > salary2.salary)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	EmployeeSalary salary1;
	EmployeeSalary salary2;

	double salary, combined;

	cout << "First Salary: ";
	cin >> salary;
	salary1.setSalary(salary);
	cout << "second Salary: ";
	cin >> salary;
	salary2.setSalary(salary);

	combined = salary1 + salary2;

	if (salary1 == salary2)
	{
		cout << "The slary's are the same.";
	}
	else
	{
		if (salary1 > salary2)
		{
			cout << "The first salary is greater.";
		}
		else
		{
			cout << "The second salary is greater.";
		}
	}

	return 0;
}