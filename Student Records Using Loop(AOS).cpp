#include <iostream>
using namespace std;

struct students
{
	int rollnumm;
	char name[100];
	float marks;
};

int main()
{
	students student[3];

	for (int index = 0; index < 3; index++)
	{
		cout << "Input the roll number, name, and marks of student number " << index + 1 << ": ";
		cin >> student[index].rollnumm;
		cin.ignore();
		cin.getline(student[index].name, 100);
		cin >> student[index].marks;
	}

	for (int index = 0; index < 3; index++)
	{
		cout << "Student Number: " << index + 1 << " Account information" << endl;
		cout << "Roll Number: " << student[index].rollnumm << endl;
		cout << "Name: " << student[index].name << endl;
		cout << "Marks: " << student[index].marks << endl;
	}

	return 0;
}