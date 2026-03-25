#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	int age;
public:
	void setage(int age1)
	{
		age = age1;
	}

	int getage()
	{
		return age;
	}
};

class Student : public Person
{
private:
	string name;
public:
	void setName(string name1)
	{
		name = name1;
	}

	void display()
	{
		cout << "Student ID Card" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << getage() << endl;
		cout << "Status: Active Student" << endl;
	}
};

int main()
{
	Student student1;

	student1.setName("Amy");
	student1.setage(21);
	student1.display();
}