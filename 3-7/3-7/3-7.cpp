#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectRandom {
public:
	SelectRandom();
	int next();
	int nextInRange(int a, int b);
};

SelectRandom::SelectRandom() {
	srand((unsigned)time(0));
}
int SelectRandom::next() {
	int n = 1;
	while (n % 2 == 1) {
		n = rand();
	}
	return n;
}

int SelectRandom::nextInRange(int a, int b) {
	int n = 0;
	while (n % 2 == 0) {
		n = a + rand() % (b - a);
	}
	return n;
}


int main() {
	SelectRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2����" << "9 ������ ���� Ȧ�� ���� 10�� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}