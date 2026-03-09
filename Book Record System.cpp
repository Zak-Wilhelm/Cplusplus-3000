#include <iostream>
#include <string>
using namespace std;

class Book
{
	private:
		string title;
		float price;
	public:
		void setBook(string temptitle, float tempprice);
		void displayBook();
};

void Book::setBook(string temptitle, float tempprice)
{
	title = temptitle;
	price = tempprice;
}

void Book::displayBook()
{
	cout << "Title: " << title << endl;
	cout << "Price: " << price << endl;
}

int main()
{
	Book book1;
	string title;
	float price;

	cout << "What is the title of the book: ";
	getline(cin, title);

	cout << "What is the price of the book: ";
	cin >> price;

	book1.setBook(title, price);
	book1.displayBook();

	return 0;
}