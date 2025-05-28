#include <iostream>
#include <string>
using namespace std;

template <class T>
void reverseArray(T arr[], T a) {
	T b;
	for (int i = 0; i < a / 2; i++) {
		b = arr[i];
		arr[i] = arr[a - i - 1];
		arr[a - i - 1] = b;
	}

}

int main() {
	int x[] = { 1,10,100,5,4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) {
		cout << x[i] << ' ';
	}
}