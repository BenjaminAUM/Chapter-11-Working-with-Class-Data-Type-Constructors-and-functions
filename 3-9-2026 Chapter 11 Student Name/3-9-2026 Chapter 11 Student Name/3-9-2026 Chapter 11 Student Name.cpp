// 3-9-2026 Chapter 11 Student Name
#include <iostream>
#include <string>
using namespace std;

class Student
{
	private:
		string student_name;

	public:
		Student();
		void displayName();
};

Student::Student()
{
	student_name = "Unknown";
}

void Student::displayName()
{
	cout << "Student name: " << student_name << endl;
}

int main()
{
	Student student_1;

	student_1.displayName();
	
	return 0;
}