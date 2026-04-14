#include <iostream>
using namespace std;
int main() {
	system("chcp 65001");
	int a;
	double b, c;
	cout << "Введите код города: "; cin >> a;
	cout << "Введите длительность разговора: "; cin >> b;
	switch (a) {
	case 423: 
		c = 2.2 * b;
		cout << "Цена разговора: " << c;
		break;
	case 95:
		c = 1.0 * b;
		cout << "Цена разговора: " << c;
		break;
	case 815:
		c = 1.2 * b;
		cout << "Цена разговора: " << c;
		break;
	case 846:
		c = 1.4 * b;
		cout << "Цена разговора: " << c;
		break;
	default: cout << "Введён некорректный код города!";
	}
	return 0;
}