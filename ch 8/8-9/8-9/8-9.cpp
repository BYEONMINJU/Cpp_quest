#include <iostream>
#include <string>
using namespace std;

class Seat {
	string s;
public:
	Seat(string n = "---") { s = n; }
	void reservation(string n) { s = n; }
	void cancle() { s = "---"; }
	void show() { cout << s; }
};

class Schedule {
	Seat* time;
	string hour;
public:
	Schedule(string hour="00��") {
		time = new Seat[8];
		this->hour = hour;
	}
	void setTime(string t) {
		this->hour = t;
	}
	string getTime() {
		return hour;
	}
	void reservation(int index, string name) { time[index].reservation(name); }
	void cancle(int index) { time[index].cancle(); }
	void show() {
		for (int i = 0; i < 8; i++) {
			time[i].show();
			cout << "\t";
		}
		cout << endl;
	}
};

class AirlineBook {
	Schedule* book = new Schedule[3];
public:
	AirlineBook() {
		book[0].setTime("07��");
		book[1].setTime("12��");
		book[2].setTime("17��");
	}
	void show(int index) {
		cout << book[index].getTime() << '\t';
		book[index].show();
	}
	void reservation(int index, int seat, string name) {
		book[index].reservation(seat, name);
	}
	void cancle(int index, int seat, string name) {
		book[index].cancle(seat);
	}
};

class Console {

public:
	static int menu;
	static int hour;
	static AirlineBook hansung;
	static void showMenu() {
		cout << "����:1, ���:2, ����:3, ������:4>>";
		cin >> menu;
	}
	static void reservation() {
		cout << "07��:1, 12��:2, 17��:3>>";
		cin >> hour;
		hansung.show(hour - 1);
		int seat;
		string name;
		cout << "�¼���ȣ>>";
		cin >> seat;
		cout << "�̸��Է�>>";
		cin >> name;
		hansung.reservation(hour - 1, seat - 1, name);
	}
	static void cancle() {
		cout << "07��:1, 12��:2, 17��:3>>";
		cin >> hour;
		hansung.show(hour - 1);
		int seat;
		string name;
		cout << "�¼���ȣ>>";
		cin >> seat;
		cout << "�̸��Է�>>";
		cin >> name;
		hansung.cancle(hour - 1, seat - 1, name);
	}
	static void show() {
		for (int i = 0; i < 3; i++) {
			hansung.show(i);
		}
	}
	static void start() {
		cout << "***** �Ѽ��װ��� ���Ű��� ȯ���մϴ� *****" << endl;
		while (true) {
			showMenu();
			switch (menu) {
			case 1:
				reservation(); break;
			case 2:
				cancle(); break;
			case 3:
				show(); break;
			case 4:
				cout << "���� �ý����� �����մϴ�";
				return;
			}
		}
	}
};

int Console::menu = 0;
int Console::hour = 0;
AirlineBook Console::hansung;

int main() {
	Console::start();
}