#include <iostream>
#include <string>
using namespace std;

template <class T>
T biggest(T arr[],T a) {
	T b = arr[0];
	for (int i = 1; i < a; i++) {
		if(b <= arr[i]){
			b = arr[i];
		}
	}
	return b;
}


int main() {
	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5) << endl;
}