#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>v;
	int a = 1;
	while (a != 0) {
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
		cin >> a;
		v.push_back(a);
		double s = 0;
		for (int i = 0; i < v.size(); i++) {
			s += v[i];
		}
		if (a != 0) cout << "��� = " << s / v.size() << endl;
	}
}