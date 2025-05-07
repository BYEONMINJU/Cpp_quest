#include <iostream>
using namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack() :MyIntStack(1) {}
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s);
	~MyIntStack();
	bool push(int n);
	bool pop(int& n);
};

MyIntStack::MyIntStack(int size) {
	this->size = size;
	this->tos = -1;
	this->p = new int[size];
}

int main() {
	MyIntStack a(10)
		;
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "���� a���� ���� �� " << n << endl;
	b.pop(n);
	cout << "���� b���� ���� �� " << n << endl;
}