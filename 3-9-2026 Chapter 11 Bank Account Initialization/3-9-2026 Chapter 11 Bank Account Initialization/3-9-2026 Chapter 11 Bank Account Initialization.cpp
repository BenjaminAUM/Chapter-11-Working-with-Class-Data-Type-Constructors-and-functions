// 3-9-2026 Chapter 11 Bank Account Initialization
#include <iostream>
using namespace std;

class BankAccount
{
	private:
		float balance;

	public:
		BankAccount(float bal);
		void displayBalance();
};

BankAccount::BankAccount(float bal)
{
	balance = bal;
}

void BankAccount::displayBalance()
{
	cout << "Balance: " << balance << endl;
}

int main()
{
	BankAccount account_a(500);
	BankAccount account_b(1200);
	BankAccount account_c(50);

	cout << "Account A balance: ";
	account_a.displayBalance();

	cout << "Account B balance: ";
	account_b.displayBalance();

	cout << "Account C Balance: ";
	account_c.displayBalance();

	return 0;
}