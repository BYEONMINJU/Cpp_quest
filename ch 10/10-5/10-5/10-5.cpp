#include <iostream>
#include <string>
using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
	T* c = new T[sizea + sizeb];
	for (int i = 0; i < sizea; i++) {
		c[i] = a[i];
	}
	for (int i = 0; i < sizeb; i++) {
		c[i + sizea] = b[i];
	}
	return c;
}

int main() {
	double x[] = { 1.1,1.2,1.3 };
	double y[] = { 2.1,2.2,2.3,2.4 };
	double* z =concat(x, 3, y, 4);
	for (int i = 0; i < 7; i++) {
		cout << z[i] << " ";
	}
}
