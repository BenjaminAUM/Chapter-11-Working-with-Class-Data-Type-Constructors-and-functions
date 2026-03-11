// 3-11-2026 Chapter 11 Bus Seat Number
#include <iostream>
using namespace std;

class Bus_Seat
{
	private:
		int seat_number;

	public:
		Bus_Seat(int seat);
		int getSeat_Number() const;
};

Bus_Seat::Bus_Seat(int seat)
{
	seat_number = seat;
}

int Bus_Seat::getSeat_Number() const
{
	return seat_number;
}

int main()
{
	Bus_Seat seat(12);

	cout << "Seat Number: " << seat.getSeat_Number() << endl;

	return 0;
}