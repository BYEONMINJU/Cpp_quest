#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() :Circle(1){}
	Circle(int r) {
		this->radius = r;
	}
	void show() { cout << "¹ÝÁö¸§: " <<radius<< endl; }
};

void swap(Circle& a, Circle& b) {
	Circle swp;
	swp = a;
	a = b;
	b = swp;
}

int main() {
	Circle a(8);
	Circle b(16);
	swap(a, b);
	a.show();
}