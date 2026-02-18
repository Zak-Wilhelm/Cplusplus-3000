#include <iostream>
using namespace std;

struct result_record
{
	int total;
	float average;
};

result_record calc_result(int mark1, int mark2, int mark3);

int main()
{
	int mark1;
	int mark2;
	int mark3;

	cout << "Input the first mark then the second mark and lastly the third mark: ";
	cin >> mark1;
	cin >> mark2;
	cin >> mark3;

	result_record result1 = calc_result(mark1, mark2, mark3);

	cout << "The total is: " << result1.total << endl;
	cout << "The average is: " << result1.average << endl;

	return 0;
}

result_record calc_result(int mark1, int mark2, int mark3)
{
	result_record temp_result;
	temp_result.total = mark1 + mark2 + mark3;
	temp_result.average = (mark1 + mark2 + mark3) / 3;
	return temp_result;
}