#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success);

int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M�� �߰��� �� ����" << endl;
		return 0;
	}
	loc = 'm';
	cout << s << endl;
}

char& find(char a[], char c, bool& success) {
	for (int i = 0; i < strlen(a); i++) {
		if (c == a[i]) {
			success = true;
			a[i] = c;
			return a[i];
		}

	}
	success = false;
}