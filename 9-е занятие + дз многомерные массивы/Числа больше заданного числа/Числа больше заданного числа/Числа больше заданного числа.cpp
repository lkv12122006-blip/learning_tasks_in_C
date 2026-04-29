#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	system("chcp 65001");
	srand(time(0));

	int table[10][10];
	int a, b;
	int k;

	cout << "Введите число K: "; cin >> k;

	cout << '\n';

	cout << "Таблица: \n";

	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			table[a][b] = rand() % 21 - 10;
		}
	}

	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			cout << table[a][b] << ' ';
		}
		cout << '\n';
	}

	cout << '\n';

	cout << "Числа больше k: ";

	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			if (k < table[a][b]) {
				cout << table[a][b] << ' ';
			}
		}
	}

	cout << '\n';

	return 0;

}
