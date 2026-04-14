#include <iostream>

using namespace std;
int main() {
	system("chcp 1251");
	int a, b;
	cout << "Введите два числа: ";
	cin >> a >> b;
	if (b) cout << a / b << "\n"; else cout << " На нуль делить нельзя.\n";
	return 0; 
}