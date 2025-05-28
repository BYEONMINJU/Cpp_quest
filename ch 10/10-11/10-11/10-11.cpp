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
	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�." << endl;
	while (y != -1) {
		cout << "�⵵>>";
		cin >> y;
		cin.ignore(1, '\n');
		if (y == -1) { break; }
		cout << "å�̸�>>";
		getline(cin, t);
		cout << "����>>";
		getline(cin, a);
		Book v(t, a, y);
		b.push_back(v);
	}
	string s;
	cout << "�� �԰�� å�� " << b.size() << "�� �Դϴ�." << endl;
	cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է��ϼ���>>";
	cin >> s;
	for (int i = 0; i < b.size(); i++) {
		if (s == b[i].getAuthor()) {
			cout << b[i].getYear() << "�⵵, " << b[i].getTitle() << ", " << b[i].getAuthor() << endl;
		}
	}
	int r;
	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���>>";
	cin >> r;
	for (int i = 0; i < b.size(); i++) {
		if (r == b[i].getYear()) {
			cout << b[i].getYear() << "�⵵, " << b[i].getTitle() << ", " << b[i].getAuthor() << endl;
		}
	}
}