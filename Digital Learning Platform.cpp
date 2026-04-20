#include <iostream>
using namespace std;

class Course
{
public:
	virtual void startClass() = 0;
};

class ProgrammingCourse : public Course
{
public:
	void startClass()
	{
		cout << "Welcome to Programming class";
	}
};

class MathCourse : public Course
{
public:
	void startClass()
	{
		cout << "Welcome to math class";
	}
};

int main()
{
	Course *course;
	ProgrammingCourse PC;
	MathCourse mathc;

	course = &PC;
	course->startClass();

	course = &mathc;
	course->startClass();

	return 0;
}