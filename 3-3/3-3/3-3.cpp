#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	int balance, id;
	string name;
public:
	Account(string n, int i, int b);
	string getOwner();
	int deposit(int p);
	int withdraw(int q);
	int inquiry();
};
Account::Account(string n, int i, int b) {
	name = n;
	id = i;
	balance = b;
}

string Account::getOwner() {
	return name;
}

int Account::deposit(int p) {
	balance += p;
	return balance;
}

int Account::withdraw(int q) {
	balance -= q;
	return balance;
}

int Account::inquiry() {
	return balance;
}


int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}