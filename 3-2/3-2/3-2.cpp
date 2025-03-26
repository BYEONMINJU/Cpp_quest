#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Date {
public:
	int year, month, day;
	Date(string k);
	Date(int a, int b, int c);
	int getYear();
	int getMonth();
	int getDay();
	void show() {
		cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
	}
};

Date::Date(int a, int b, int c) {
	year = a;
	month = b;
	day = c;
}

Date::Date(string k) {
	stringstream ss(k);
	string t;
	getline(ss, t, '/');
	year = stoi(t);
	getline(ss, t, '/');
	month = stoi(t);
	getline(ss, t, '/');
	day = stoi(t);
}


int Date::getYear() {
	return year;
}
int Date::getMonth() {
	return month;
}
int Date::getDay() {
	return day;
}
int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}