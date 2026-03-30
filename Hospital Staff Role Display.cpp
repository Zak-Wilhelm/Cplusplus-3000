#include <iostream>
using namespace std;

class Staff
{
public:
	void showRole()
	{
		cout << "Role";
	}
};

class Doctor : public Staff
{
public:
	void showRole()
	{
		cout << "Doctor";
	}
};

class Nurse : public Staff
{
public:
	void showRole()
	{
		cout << "Nurse";
	}
};

int main()
{
	Doctor doctor1;
	Nurse nurse1;

	doctor1.showRole();
	nurse1.showRole();

	return 0;
}