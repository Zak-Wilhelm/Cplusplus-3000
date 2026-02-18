#include <iostream>
using namespace std;

struct temp_record
{
	float celsius;
};

void convert_to_fahrenheit(temp_record& temp_ref);

int main()
{
	temp_record temp;

	cout << "Input the temperature in celsius: ";
	cin >> temp.celsius;

	cout << temp.celsius << endl;

	convert_to_fahrenheit(temp);

	cout << temp.celsius << endl;

	return 0;
}

void convert_to_fahrenheit(temp_record& temp_ref)
{
	temp_ref.celsius = temp_ref.celsius * 1.8 + 32;
	cout << temp_ref.celsius << endl;
}