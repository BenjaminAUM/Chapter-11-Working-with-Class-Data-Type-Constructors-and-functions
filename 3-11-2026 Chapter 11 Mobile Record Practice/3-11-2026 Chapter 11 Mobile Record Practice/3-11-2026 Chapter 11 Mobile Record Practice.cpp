// 3-11-2026 Chapter 11 Mobile Record Practice
#include <iostream>
#include <string>
using namespace std;

class Mobile
{
	private:
		string brand_name;
		float mobile_price;

	public:
		Mobile(string brand, float price);
		void setPrice(float mobile_price);
		string getBrand() const;
		float getPrice() const;
};

Mobile::Mobile(string brand, float price)
{
	brand_name = brand;
	mobile_price = price;
}

void Mobile::setPrice(float mobile_price)
{
	this->mobile_price = mobile_price;
}

string Mobile::getBrand() const
{
	return brand_name;
}

float Mobile::getPrice() const
{
	return mobile_price;
}

int main()
{
	Mobile phone("Samsung", 25000);

	phone.setPrice(27000);

	cout << "Brand name: " << phone.getBrand() << endl;
	cout << "New Price: " << phone.getPrice() << endl;

	return 0;
}