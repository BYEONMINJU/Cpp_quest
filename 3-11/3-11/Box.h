#pragma once
class Box {
	int width, height;
	char fill;
public:
	Box(int w, int h) {
		setSize(w, h), fill = '*';
	}
	void setFill(char f) {
		fill = f;
	}
	void setSize(int w, int h) {
		width = w;
		height = h;
	}
	void draw();
};

void Box::draw() {
	for (int n = 0; n < height; n++) {
		for (int m = 0; m < width; m++) cout << fill;
		cout << endl;
	}
}