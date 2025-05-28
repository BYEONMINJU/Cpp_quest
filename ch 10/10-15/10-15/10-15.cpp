#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Circle {
    string name;
    int radius;
public:
    Circle(int radius, string name) {
        this->radius = radius;
        this->name = name;
    }
    double getArea() { return 3.14 * radius * radius; }
    string getName() { return name; }
};

int main() {
    vector<Circle*> v;
    string n;
    int r, num = 0;
    cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�." << endl;
    while (true) {
        cout << "����: 1, ����: 2, ��κ���: 3, ����: 4>> ";
        cin >> num;
        switch (num) {
        case 1:
            cout << "�����ϰ��� �ϴ� ���� �������� �̸���>>";
            cin >> r >> n;
            v.push_back(new Circle(r, n));
            break;
        case 2:
            cout << "�����ϰ��� �ϴ� ���� �̸���>>";
            cin >> n;
            for (auto it = v.begin(); it != v.end(); ) {
                if ((*it)->getName() == n) {
                    delete* it;
                    it = v.erase(it);
                }
                else {
                    ++it;
                }
            }
            break;
        case 3:
            for (int i = 0; i < v.size(); i++) {
                cout << v[i]->getName() << endl;
            }
            cout << endl;
            break;
        case 4:
            return 0;
        }
    }
}
