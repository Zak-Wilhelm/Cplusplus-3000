#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	string name;
	int age;
};

class Doctor :public Person
{
public:
	string specialization;
};

class Patient : public Person
{
public:
	string disease_name;
};

int main()
{
	Doctor doctor1;
	Patient patient1;

	doctor1.name = "Dr. Meera";
	doctor1.age = 45;
	doctor1.specialization = "Cardiology";
	patient1.name = "Arjun";
	patient1.age = 30;
	patient1.disease_name = "Fever";

	cout << "Name: " << doctor1.name << endl;
	cout << "Age: " << doctor1.age << endl;
	cout << "Specialization: " << doctor1.specialization << endl;
	cout << "Name: " << patient1.name << endl;
	cout << "Age: " << patient1.age << endl;
	cout << "Disease: " << patient1.disease_name << endl;

	return 0;
}