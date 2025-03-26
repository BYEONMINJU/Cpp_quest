#include <iostream>
#include <string>
using namespace std;

#include "class.h"

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int j, k;
	char q;
	while (true) {
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> j >> k >> q;
		switch (q) {
		case '+':
			a.setValue(j, k);
			cout << a.calculate() << endl;
			break;
		case '-':
			s.setValue(j, k);
			cout << s.calculate() << endl;
			break;
		case '*':
			m.setValue(j, k);
			cout << m.calculate() << endl;
			break;
		case '/':
			d.setValue(j, k);
			cout << d.calculate() << endl;
			break;
		}
	}
}