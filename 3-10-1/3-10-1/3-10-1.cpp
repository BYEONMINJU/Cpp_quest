#include <iostream>
#include <string>
using namespace std;

class Oval {
public:
	int width, height;
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
	Oval(int x, int y);
	Oval();
	~Oval();
};

Oval::Oval() {
	width = 1;
	height = 1;
}
Oval::Oval(int x, int y) {
	width = x;
	height = y;
}

Oval::~Oval() {
	cout << "Oval ¼Ò¸ê : " << "width = " << width << ", height = " << height << endl;
}

int Oval::getHeight() {
	return height;
}

int Oval::getWidth() {
	return width;
}

void Oval::set(int w, int h) {
	width = w;
	height = h;
}

void Oval::show() {
	cout << "width = " << width << "height = " << height << endl;
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;

}