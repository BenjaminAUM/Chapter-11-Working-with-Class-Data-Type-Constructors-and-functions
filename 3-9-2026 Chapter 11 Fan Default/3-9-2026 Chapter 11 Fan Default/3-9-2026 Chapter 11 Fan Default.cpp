// 3-9-2026 Chapter 11 Fan Default
#include <iostream>
using namespace std;

class Fan
{
	private:
		float speed;

	public:
		Fan();
		void setSpeed(float speed);
		float getSpeed() const;
};

Fan::Fan()
{
	speed = 0;
}

void Fan::setSpeed(float speed)
{
	this->speed = speed;
}

float Fan::getSpeed() const
{
	return speed;
}

int main()
{
	Fan speed_1;
	float user_input;
	cout << "Enter new Fan speed: ";
	cin >> user_input;

	speed_1.setSpeed(user_input);
	cout << "Fan Speed: " << speed_1.getSpeed() << endl;

	return 0;
}