#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;


int main() {
	int n = 2;
	int& refn = n;
	refn = 4;
	cout << n;
}