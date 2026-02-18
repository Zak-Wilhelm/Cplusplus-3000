#include <iostream>
using namespace std;

struct book
{
	int bookid;
	char title[200];
	float price;
};

int main()
{
	book book1;

	cout << "Input the book id, title, and price: ";
	cin >> book1.bookid;
	cin.ignore();
	cin.getline(book1.title, 200);
	cin >> book1.price;

	cout << "The books id is: " << book1.bookid << endl;
	cout << "The books title is: " << book1.title << endl;
	cout << "The books price is: " << book1.price << endl;

	return 0;
}