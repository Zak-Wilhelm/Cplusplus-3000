#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
};

class Student : public Person
{
public:
	int roll_number;
};

class Graduate : public Student
{
public:
	string degree_name;
};

int main()
{
	Graduate grad1;

	grad1.name = "Anu";
	grad1.roll_number = 25;
	grad1.degree_name = "MCA";

	cout << "Name: " << grad1.name << endl;
	cout << "Roll NUmber: " << grad1.roll_number << endl;
	cout << "Degree Name: " << grad1.degree_name << endl;

	return 0;
}