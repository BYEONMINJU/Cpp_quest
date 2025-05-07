#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) return false;
	else {
		if (a > b) {
			big = a;
			return true;
		}
		else {
			big = b;
			return true;
		}
	}
}

int main() {
	int a, b, c;
	cin >> a >> b;
	if (bigger(a, b, c)) {
		cout << c;
	}
	else {
		cout << "두 수가 같습니다";
	}
}