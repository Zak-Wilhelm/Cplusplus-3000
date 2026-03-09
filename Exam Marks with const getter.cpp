#include <iostream>
#include <string>
using namespace std;

class Exam
{
	private:
		float marks;
	public:
		void setmarks(float marks);
		float getMarks() const;
};

void Exam::setmarks(float marks)
{
	this->marks = marks;
}

float Exam::getMarks() const
{
	return marks;
}

int main()
{
	Exam exam1;

	float marks;

	cout << "What did you make on the exam: ";
	cin >> marks;

	exam1.setmarks(marks);
	cout << "Marks: " << exam1.getMarks() << endl;

	return 0;
}