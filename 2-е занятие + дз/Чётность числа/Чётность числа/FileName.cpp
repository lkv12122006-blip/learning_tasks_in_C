#include <iostream>
using namespace std;
int main() {
	int a;
	bool p;
	system("chcp 1251");
	cout << "¬ведите число: ";
	cin >> a;
	p = (a % 2 == 0);
	cout << boolalpha << p; // выведет true или false
}