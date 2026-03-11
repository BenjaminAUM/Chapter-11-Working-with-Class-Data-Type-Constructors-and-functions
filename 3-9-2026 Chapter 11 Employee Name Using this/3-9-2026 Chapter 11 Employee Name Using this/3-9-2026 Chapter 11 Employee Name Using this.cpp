// 3-9-2026 Chapter 11 Employee Name Using this
#include <iostream>
#include <string>
using namespace std;

class Employee
{
	private:
		string employee_name;
		float employee_salary;

	public:
		void setEmployee(string employee_name, float employee_salary);
		void displayEmployee() const;
};

void Employee::setEmployee(string employee_name, float employee_salary)
{
	this->employee_name = employee_name;
	this->employee_salary = employee_salary;
}

void Employee::displayEmployee() const
{
	cout << "Employee name: " << employee_name << endl;
	cout << "Employee salary: " << employee_salary << endl;
}

int main()
{
	Employee employee_1;

	string name;
	float salary;

	cout << "Enter Name: ";
	getline(cin, name);

	cout << "Enter Salary: ";
	cin >> salary;

	employee_1.setEmployee(name, salary);
	employee_1.displayEmployee();

	return 0;
}