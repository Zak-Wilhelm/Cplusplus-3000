#include <iostream>
#include <string>
using namespace std;

class Marks
{
public:
	int marks_scored;
};

class Attendance
{
public:
	int attendance_percentage;
};

class StudentRecord : public Marks, public Attendance
{
public:
	string student_name;
};

int main()
{
	StudentRecord student1;

	student1.student_name = "Rahul";
	student1.marks_scored = 82;
	student1.attendance_percentage = 78;

	cout << "Student Name: " << student1.student_name << endl;
	cout << "Marks: " << student1.marks_scored << endl;
	cout << "Attendance: " << student1.attendance_percentage << endl;

	if (student1.attendance_percentage >= 75)
	{
		cout << "Eligible for the exam" << endl;
	}
	else
	{
		cout << "Not eligible for the exam" << endl;
	}

	return 0;
}