#pragma once
class Add {
public:
	int a, b;
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a + b;
	}
};

class Sub {
public:
	int a, b;
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a - b;
	}
};

class Mul {
public:
	int a, b;
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a * b;
	}
};

class Div {
public:
	int a, b;
	void setValue(int x, int y) {
		a = x;
		b = y;
	}
	int calculate() {
		return a / b;
	}
};