#include <iostream>
#include <string>
using namespace std;

struct booking
{
	int id;
	string cust_name;
	string movie_name;
	int num_tickets;
	float price;
};

void display_bookings(booking booking_dets[], int size);

int main()
{
	const int size = 3;
	booking booking_dets[3];

	for (int index = 0; index < size; index++)
	{
		cout << "Input the id, customer name, movie, name, number of tickets, and price for customer " << index + 1 << endl;
		
		cout << "ID: ";
		cin >> booking_dets[index].id;

		cout << "Customer Name: ";
		cin >> booking_dets[index].cust_name;

		cout << "Movie Nmae: ";
		cin >> booking_dets[index].movie_name;

		cout << "Number of Tickets: ";
		cin >> booking_dets[index].num_tickets;

		cout << "Price: ";
		cin >> booking_dets[index].price;
	}
	display_bookings(booking_dets, size);

	return 0;
}

void display_bookings(booking booking_dets[], int size)
{
	for (int index = 0; index < size; index++)
	{
		cout << "Customer: " << index + 1 << endl;
		cout << "ID: " << booking_dets[index].id << endl;
		cout << "Customer Name: " << booking_dets[index].cust_name << endl;
		cout << "Movie Name: " << booking_dets[index].movie_name << endl;
		cout << "Number of Tickets: " << booking_dets[index].num_tickets << endl;
		cout << "Price: " << booking_dets[index].price << endl;
	}
}