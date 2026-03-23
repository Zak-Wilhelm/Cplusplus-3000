#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
	int age;
};

class AcademicInfo
{
public:
	string department_name;
};

class SportsInfo
{
public:
	string sport_name;
};

class Student : public Person
{
public:
	int roll_number;
};

class GraduateStudent : public Student
{
public:
	string degree_name;
};

class StudentLeader : public GraduateStudent, public SportsInfo, public AcademicInfo
{
public:
	string leadership_role;
};

class Teacher : public Person, public AcademicInfo
{
public:
	string subject_name;
};

int main()
{
	StudentLeader leader1;
	Teacher teacher1;

	leader1.name = "John";
	leader1.age = 24;
	leader1.department_name = "CSE";
	leader1.degree_name = "Masters";
	leader1.roll_number = 102;
	leader1.sport_name = "Basketball";
	leader1.leadership_role = "President";

	teacher1.name = "Dr. Mike";
	teacher1.age = 45;
	teacher1.department_name = "ECE";
	teacher1.subject_name = "Digital Systems";

	cout << "Student Leader Details " << endl;
	cout << "Name: " << leader1.name << endl;
	cout << "Age: " << leader1.age << endl;
	cout << "Department: " << leader1.department_name << endl;
	cout << "Roll Number: " << leader1.roll_number << endl;
	cout << "Degree: " << leader1.degree_name << endl;
	cout << "Sports: " << leader1.sport_name << endl;
	cout << "Leadership Role: " << leader1.leadership_role << endl;

	cout << "Teacher Details " << endl;
	cout << "Name: " << teacher1.name << endl;
	cout << "Age: " << teacher1.age << endl;
	cout << "Department: " << teacher1.department_name << endl;
	cout << "Subject: " << teacher1.subject_name << endl;

	return 0;
}