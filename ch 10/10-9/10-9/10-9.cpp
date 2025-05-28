#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int>v;
	int a = 1;
	while (a != 0) {
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> a;
		v.push_back(a);
		double s = 0;
		for (int i = 0; i < v.size(); i++) {
			s += v[i];
		}
		if (a != 0) cout << "평균 = " << s / v.size() << endl;
	}
}