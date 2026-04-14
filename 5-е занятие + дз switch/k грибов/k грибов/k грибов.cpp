#include <iostream>
using namespace std;
int main() {
	system("chcp 65001");
	int n;
	cout << "Введите количество грибов: "; cin >> n;
	switch (n % 10) {
	case 1:
		if ((n / 10) % 10 != 1)
			cout << "Мы нашли " << n << "гриб " << "в лесу";
		else
		{
			cout << "Мы нашли " << n << "грибов " << "в лесу";
		}
		break;
	case 2:
	case 3:
	case 4:
		if ((n / 10) % 10 != 1)
			cout << "Мы нашли " << n << "гриба " << "в лесу";
		else
		{
			cout << "Мы нашли " << n << "грибов " << "в лесу";
		}
		break;
	default: cout << "Мы нашли " << n << "грибов " << "в лесу";
	}
}
