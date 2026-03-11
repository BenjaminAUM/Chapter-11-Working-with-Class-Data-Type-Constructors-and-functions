// 3-9-2026 Chapter 11 Product Price
#include <iostream>
#include <string>
using namespace std;

class Product
{
	private:
		string product_name;
		float product_price;

	public:
		void setProduct(string product_name, float product_price);
		void displayProduct();
};

void Product::setProduct(string product_name, float product_price)
{
	this->product_name = product_name;
	this->product_price = product_price;
}

void Product::displayProduct()
{
	cout << "Product name: " << product_name << endl;
	cout << "Product price: " << product_price << endl;
}

int main()
{
	Product product_1;

	string name;
	float price;

	cout << "Product name: ";
	getline(cin, name);

	cout << "Product price: ";
	cin >> price;

	product_1.setProduct(name, price);
	product_1.displayProduct();

	return 0;
}