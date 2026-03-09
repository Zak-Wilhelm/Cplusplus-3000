#include <iostream>
#include <string>
using namespace std;

class LibraryBook
{
private:
	int copies;
	string title;
public:
	LibraryBook()
	{
		copies = 3;
		title = "C++ Basics";
	}
	void borrow()
	{
		if (copies > 0)
		{
			copies--;
		}
		else
		{
			cout << "Not Available" << endl;
		}
	}
	void set_title(string book_title)
	{
		if (book_title[0] != ' ')
		{
			title = book_title;
		}
	}
	int get_copies()
	{
		return copies;
	}
	string get_title()
	{
		return title;
	}
};

int main()
{
	LibraryBook book;

	int borrowing;
	cin >> borrowing;

	string book_title;
	cin >> book_title;

	for (int index = 0; index < borrowing; index++)
	{
		book.borrow();
	}

	book.set_title(book_title);

	cout << "Title: " << book.get_title() << " Copies Left: " << book.get_copies() << endl;

	return 0;
}