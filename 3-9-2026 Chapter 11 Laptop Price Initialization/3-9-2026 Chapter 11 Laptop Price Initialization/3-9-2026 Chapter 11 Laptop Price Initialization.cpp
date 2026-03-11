// 3-9-2026 Chapter 11 Laptop Price Initialization
#include <iostream>
using namespace std;

class Laptop
{
	private:
		float laptop_price;

	public:
		Laptop(float price);
		void displayPrice() const;
};

Laptop::Laptop(float price)
{
	laptop_price = price;
}

void Laptop::displayPrice() const
{
	cout << laptop_price << endl;
}

int main()
{
	Laptop laptop_a(45000);
	Laptop laptop_b(62000);
	Laptop laptop_c(81000);

	cout << "Laptop A price: ";
	laptop_a.displayPrice();

	cout << "Laptop B price: ";
	laptop_b.displayPrice();

	cout << "Laptop C Price: ";
	laptop_c.displayPrice();

	return 0;
}