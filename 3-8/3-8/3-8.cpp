#include <iostream>
#include <string>
using namespace std;

class Integer {
public:
	int num;
	string s;
	Integer(int a);
	Integer(string k);
	int get();
	int set(int b);
	bool isEven();
};

Integer::Integer(int a) {
	num = a;
}

Integer::Integer(string k) {
	num = stoi(k);
}

int Integer::get() {
	return num;
}

int Integer::set(int b) {
	num = b;
	return num;
}

bool Integer::isEven() {
	if (num % 2 == 0) {
		return true;
	}
}

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}