#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int choice, score;
	string name;
	map <string, int> v;
	cout << "***** �������� ���α׷� HIGH SCORE�� �����մϴ�. *****" << endl;
	while (true) {
		cout << "�Է�: 1, ��ȸ: 2, ����: 3 >> ";
		cin >> choice;
		if (choice == 1) {
			cout << "�̸��� ����>> ";
			cin >> name >> score;
			v[name] = score;
		}
		else if (choice == 2) {
			cout << "�̸�>> ";
			cin >> name;
			if (v.find(name) == v.end())
				cout << "ã�� �� �����ϴ�.";
			else
				cout << name << "�� ������ " << v[name] << endl;
		}
		else if (choice == 3)
			break;
	}
	cout << "���α׷��� �����մϴ�..";
	return 0;
}