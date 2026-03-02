#include <iostream>
#include <string>
using namespace std;

class Student
{
	private:
		string student_name;
		int marks;
	public:
		void student_data(string name, int m)
		{
			student_name = name;
			if (m >= 0 && m <= 100)
			{
				marks = m;
			}
			else
			{
				marks = 0;
			}
		}

		bool pass()
		{
			return marks >= 40;
		}

		void display_result()
		{
			cout << "Student Name: " << student_name << endl;
			cout << "Marks: " << marks << endl;
			cout << "Result: " << (pass() ? "Pass" : "Fail") << endl;
		}
};

int main()
{
	Student student1;

	student1.student_data("Asha", 55);
	student1.display_result();

	return 0;
}