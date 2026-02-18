#include <iostream>
using namespace std;

struct patients
{
	int id;
	char name[100];
	float temp;
};

int main()
{
	patients patient[5];

	for (int index = 0; index < 5; index++)
	{
		cout << "Input the patient id, name, and temperature of patient number " << index + 1 << ": ";
		cin >> patient[index].id;
		cin.ignore();
		cin.getline(patient[index].name, 100);
		cin >> patient[index].temp;
	}

	for (int index = 0; index < 5; index++)
	{
		cout << "Patient " << index + 1 << ": " << endl;
		cout << "ID = " << patient[index].id << endl;
		cout << "Name = " << patient[index].name << endl;
		cout << "Temperature = " << patient[index].temp << endl;
	}

	return 0;
}