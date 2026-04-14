#include <iostream>
using namespace std;

int main() {
	system("chcp 1251");
	double a, b, c;
	cout << "¬ведите 3 числа: ";
	cin >> a >> b >> c;

	if (a > b) cout << a;
	else if (b > c) cout << b;
	else if (c > b) cout << c;
	return 0;
	
}