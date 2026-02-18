#include <iostream>
using namespace std;

struct students
{
	int id;
	char name[100];
	int course_code;
	int credits;
};

int main()
{
	students student[4];

	for (int index = 0; index < 5; index++)
	{
		cout << "Input the students id, name, course code and credits of student number " << index + 1 << ": ";
		cin >> student[index].id;
		cin.ignore();
		cin.getline(student[index].name, 100);
		cin >> student[index].course_code;
		cin >> student[index].credits;

	for (int index = 0; index < 5; index++)
	{
		cout << "Student " << index + 1 << ": " << endl;
		cout << "ID = " << student[index].id << endl;
		cout << "Name = " << student[index].name << endl;
		cout << "Course Code = " << student[index].course_code << endl;
		cout << "Credits = " << student[index].credits << endl;
	}

	return 0;
}