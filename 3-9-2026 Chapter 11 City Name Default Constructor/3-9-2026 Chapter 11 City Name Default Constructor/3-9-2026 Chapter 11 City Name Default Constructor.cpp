// 3-9-2026 Chapter 11 City Name Default Constructor
#include <iostream>
#include <string>
using namespace std;

class City
{
	private:
		string city_name;

	public:
		City();
		void displayCity() const;
};

City::City()
{
	city_name = "Montgomery";
}

void City::displayCity() const
{
	cout << "City name: " << city_name << endl;
}

int main()
{
	City city_1;

	city_1.displayCity();

	return 0;
}