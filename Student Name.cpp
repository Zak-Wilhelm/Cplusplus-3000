#include <iostream>
#include <string>
using namespace std;

class Student
{
	private:
		string student_name;
	public:
		Student();
		void displayName();
};

Student::Student()
{
	student_name = "Unknown";
}

void Student::displayName()
{
	cout << "Name: " << student_name << endl;
}

int main()
{
	Student student1;
	
	student1.displayName();

	return 0;
}