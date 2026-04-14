#include <iostream>
#include <cmath>
using namespace std;
int main() {
	system("chcp 1251");
	int a, b, n;
	b = 0;
	cout << "Введите N: "; cin >> n;
	for (a = 2; a <=  2 * n; a += 2) {
		b += a;
	}
	cout << b << " ";
	return 0;
