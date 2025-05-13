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
	Schedule(string hour="00시") {
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
		book[0].setTime("07시");
		book[1].setTime("12시");
		book[2].setTime("17시");
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
		cout << "예약:1, 취소:2, 보기:3, 끝내기:4>>";
		cin >> menu;
	}
	static void reservation() {
		cout << "07시:1, 12시:2, 17시:3>>";
		cin >> hour;
		hansung.show(hour - 1);
		int seat;
		string name;
		cout << "좌석번호>>";
		cin >> seat;
		cout << "이름입력>>";
		cin >> name;
		hansung.reservation(hour - 1, seat - 1, name);
	}
	static void cancle() {
		cout << "07시:1, 12시:2, 17시:3>>";
		cin >> hour;
		hansung.show(hour - 1);
		int seat;
		string name;
		cout << "좌석번호>>";
		cin >> seat;
		cout << "이름입력>>";
		cin >> name;
		hansung.cancle(hour - 1, seat - 1, name);
	}
	static void show() {
		for (int i = 0; i < 3; i++) {
			hansung.show(i);
		}
	}
	static void start() {
		cout << "***** 한성항공에 오신것을 환영합니다 *****" << endl;
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
				cout << "예약 시스템을 종료합니다";
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