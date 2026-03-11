// 3-9-2026 Chapter 11 Book Record System
#include <iostream>
#include <string>
using namespace std;

class Book
{
	private:
		string book_title;
		float book_price;

	public:
		void setBook(string title, float price);
		void display_Book();
};

void Book::setBook(string title, float price)
{
	book_title = title;
	book_price = price;
}

void Book::display_Book()
{
	cout << "Book Title: " << book_title << endl;
	cout << "Book Price: " << book_price << endl;
}

int main()
{
	Book book_1;
	string title;
	float price;

	cout << "Enter book title: ";
	getline(cin, title);

	cout << "Enter book price: ";
	cin >> price;

	book_1.setBook(title, price);
	book_1.display_Book();

	return 0;
}