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

class Teacher : public Person
{
public:
	string subject_name;
};

int main()
{
	Student student1;
	Teacher teacher1;

	student1.name = "Riya";
	student1.roll_number = 15;
	teacher1.name = "Mr. Thomas";
	teacher1.subject_name = "Physics";

	cout << "Name: " << student1.name << endl;
	cout << "Roll Number: " << student1.roll_number << endl;
	cout << "Name: " << teacher1.name << endl;
	cout << "Subject Name: " << teacher1.subject_name << endl;

	return 0;
}