// 3-9-2026 Chapter 11 Exam marks with const Getter
#include <iostream>
using namespace std;

class Exam
{
	private:
		float marks;

	public:
		void setMarks(float marks);
		float getMarks() const;
};

void Exam::setMarks(float marks)
{
	this->marks = marks;
}

float Exam::getMarks() const
{
	return marks;
}

int main()
{
	Exam student;
	float marks;

	cout << "Enter Student Marks: ";
	cin >> marks;

	student.setMarks(marks);
	cout << "Student Marks: " << student.getMarks() << endl;

	return 0;
}