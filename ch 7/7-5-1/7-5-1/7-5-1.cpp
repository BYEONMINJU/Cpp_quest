#include <iostream>
#include <string>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() {
		red, green, blue = 0;
	}
	Color(int r, int g, int b) {
		this->red = r;
		this->green = g;
		this->blue = b;
	}
	void show() {
		cout << red << ' ' << green << ' ' << blue << endl;
	}
	Color operator +(Color c) {
		Color a;
		a.red = this->red + c.red;
		a.green = this->green + c.green;
		a.blue = this->blue + c.blue;
		return a;
	}
	bool operator ==(Color c) {
		if (this->red == c.red && this->green == c.green && this->blue == c.blue) return true;
		else return false;
	}
};

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();
	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음" << endl;
	else
		cout << "보라색 아님" << endl;
	return 0;
}
