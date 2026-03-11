// 3-9-2026 Chapter 11 Movie Record
#include <iostream>
#include <string>
using namespace std;

class Movie
{
	private:
		string movie_name;
		float ticket_price;

	public:
		void setMovie(string movie_name, float ticket_price);
		void displayMovie() const;
};

void Movie::setMovie(string movie_name, float ticket_price)
{
	this->movie_name = movie_name;
	this->ticket_price = ticket_price;
}

void Movie::displayMovie() const
{
	cout << "Movie Name: " << movie_name << endl;
	cout << "Ticket Price: " << ticket_price << endl;
}

int main()
{
	Movie movie_1;

	string name;
	float price;

	cout << "Enter Movie name: ";
	getline(cin, name);

	cout << "Enter Price: ";
	cin >> price;

	movie_1.setMovie(name, price);
	movie_1.displayMovie();

	return 0;
}