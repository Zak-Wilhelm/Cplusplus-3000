#include <iostream>
using namespace std;

class BusSeat
{
	private:
		int seat_number;
	public:
		BusSeat(int number);
		int getSeatNumber() const;
};

BusSeat::BusSeat(int number)
{
	seat_number = number;
}

int BusSeat::getSeatNumber() const
{
	return seat_number;
}

int main()
{
	BusSeat bus1(12);

	cout << "Seat Number: " << bus1.getSeatNumber() << endl;

	return 0;
}