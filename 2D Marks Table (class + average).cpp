#include <iostream>
using namespace std;

class MarksTable
{
	private:
		int marks[3][4];
	public:
		void input_marks()
		{
			for (int student = 0; student < 3; student++)
			{
				cout << "Student " << student + 1 << ": " << endl;
				for (int subject = 0; subject < 4; subject++)
				{
					cout << "What is the grade in subject " << subject + 1 << ": " << endl;
					cin >> marks[student][subject];
				}
			}
		}
		void display_marks()
		{
			for (int student = 0; student < 3; student++)
			{
				cout << "Student " << student + 1 << ": " << endl;
				for (int subject = 0; subject < 4; subject++)
				{
					cout << "Subject " << subject + 1 << ": " << marks[student][subject] << "   ";
				}
				cout << endl;
			}
		}
		void student_average()
		{
			for (int student = 0; student < 3; student++)
			{
				int total = 0;
				for (int subject = 0; subject < 4; subject++)
				{
					total += marks[student][subject];
				}
				cout << "Average Marks: " << total / 4 << endl;
			}
		}
};

int main()
{
	MarksTable class1;
	class1.input_marks();
	class1.display_marks();
	class1.student_average();

	return 0;
}