#include <iostream>
using namespace std;

class ResultAnalyzer
{
public:
	int calcResult(int mark1, int mark2)
	{
		return mark1 + mark2;
	}
	int calcResult(int mark1, int mark2, int mark3)
	{
		return mark1 + mark2 + mark3;
	}
	double calcResult(double totalmarks, int subjects)
	{
		return totalmarks / subjects;
	}
};

int main()
{
	ResultAnalyzer results1;

	int mark1, mark2, mark3, subjects;
	double totalmarks;

	cout << "Mark 1: ";
	cin >> mark1;
	cout << "Mark 2: ";
	cin >> mark2;
	cout << "Mark 3: ";
	cin >> mark3;
	cout << "Num subjects: ";
	cin >> subjects;

	cout << "Score of first two subjects: " << results1.calcResult(mark1, mark2) << endl;
	totalmarks = results1.calcResult(mark1, mark2, mark3);
	cout << "Score of all subjects: " << results1.calcResult(mark1, mark2, mark3) << endl;
	cout << "Average of subjects: " << results1.calcResult(totalmarks, subjects) << endl;

	return 0;
}