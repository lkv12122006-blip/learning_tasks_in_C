#include <iostream>
using namespace std;
int main() {
	system("chcp 65001");

	int a[2][2];
	int b[2][2];
	int c[2][2];
	int x, y;

	cout << "Введите первую таблицу: \n";
	cout << "Первая строка: "; cin >> a[0][0] >> a[0][1];
	cout << "Вторая строка: "; cin >> a[1][0] >> a[1][1];

	cout << "Введите вторую таблицу: \n";
	cout << "Первая строка: "; cin >> b[0][0] >> b[0][1];
	cout << "Вторая строка: "; cin >> b[1][0] >> b[1][1];


	for (x = 0; x < 2; x++) {
		for (y = 0; y < 2; y++) {
			c[x][y] = a[x][0] * b[0][y] + a[x][1] * b[1][y];
		}
	}

	for (x = 0; x < 2; x++) {
		for (y = 0; y < 2; y++) {
			cout << c[x][y] << ' ';
		}
		cout << '\n';
	}

}