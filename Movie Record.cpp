#include <iostream>
#include <string>
using namespace std;

class Movie
{
	private:
		string movie_name;
		float ticket_price;
	public:
		void setMovie(string name, float price);
		void displayMovie();
};

void Movie::setMovie(string name, float price)
{
	movie_name = name;
	ticket_price = price;
}

void Movie::displayMovie()
{
	cout << "Movie Name: " << movie_name << endl;
	cout << "Ticket Price: " << ticket_price << endl;
}

int main()
{
	Movie movie1;

	string name;
	float price;

	cout << "What is the movie name: ";
	getline(cin, name);

	cout << "what is the price of the movie: ";
	cin >> price;

	movie1.setMovie(name, price);
	movie1.displayMovie();

	return 0;
}