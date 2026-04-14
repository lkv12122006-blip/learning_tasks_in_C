#include <iostream>
using namespace std;

int main() {
	system("chcp 1251");
	int a, b;
	cout << "¬ведите два числа: ";
	cin >> a >> b;
	a > b ? std::cout << a : std::cout << b;
	return 0;
}