#include <iostream>
#include <string>
using namespace std;

class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size = 0) { mem = new char[size]; }
	void setData(char a[], int length) {
		for (int i = 0; i < length; i++) {
			mem[i] = a[i];
		}
	}
	void setData(char a, int length) {
		mem[length] = a;
	}
	char getData(int i) {
		return mem[i];
	}
};

class ROM : public BaseMemory {
public:
	ROM(int size, char a[], int num) :BaseMemory(size) {
		setData(a, num);
	}
	char read(int i) {
		return getData(i);
	}
};

class RAM : public BaseMemory {
public:
	RAM(int size) :BaseMemory(size) {}
	char read(int i) {
		return getData(i);
	}
	void write(int a, char n[]) {
		setData(n, a);
	}
	void write(int a, char n) {
		setData(n, a);
	}
};

int main() {
	char x[5] = { 'h','e','l','l','o' };
	ROM biosROM(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
}
