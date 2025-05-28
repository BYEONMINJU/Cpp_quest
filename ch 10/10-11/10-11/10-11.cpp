#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
	string title, author;
	int year;
public:
	Book(string title, string author, int year) {
		this->title = title;
		this->author = author;
		this->year = year;
	}
	string getAuthor() { return author; }
	string getTitle() { return title; }
	int getYear() { return year; }
};

int main() {
	vector<Book> b;
	int y = 0;
	string a, t;
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
	while (y != -1) {
		cout << "년도>>";
		cin >> y;
		cin.ignore(1, '\n');
		if (y == -1) { break; }
		cout << "책이름>>";
		getline(cin, t);
		cout << "저자>>";
		getline(cin, a);
		Book v(t, a, y);
		b.push_back(v);
	}
	string s;
	cout << "총 입고된 책은 " << b.size() << "권 입니다." << endl;
	cout << "검색하고자 하는 저자 이름을 입력하세요>>";
	cin >> s;
	for (int i = 0; i < b.size(); i++) {
		if (s == b[i].getAuthor()) {
			cout << b[i].getYear() << "년도, " << b[i].getTitle() << ", " << b[i].getAuthor() << endl;
		}
	}
	int r;
	cout << "검색하고자 하는 년도를 입력하세요>>";
	cin >> r;
	for (int i = 0; i < b.size(); i++) {
		if (r == b[i].getYear()) {
			cout << b[i].getYear() << "년도, " << b[i].getTitle() << ", " << b[i].getAuthor() << endl;
		}
	}
}