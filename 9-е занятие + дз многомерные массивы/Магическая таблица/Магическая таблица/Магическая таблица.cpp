#include <iostream>
using namespace std;
int main() {
	system("chcp 65001");

	int table[3][3];
	int a, b;
	int sum_row = 0;
	int sum_col = 0;
	int sum_diag = 0;
	int poboch_diag = 0;
	int n = 3;
	int magicSum = 0;
	bool isMagic = true;

	cout << '\n';

	cout << "Введите первую строку: "; cin >> table[0][0] >> table[0][1] >> table[0][2];
	cout << "Введите вторую строку: "; cin >> table[1][0] >> table[1][1] >> table[1][2];
	cout << "Введите третью строку: "; cin >> table[2][0] >> table[2][1] >> table[2][2];

	cout << '\n';
	cout << "Ваша таблица: \n";

	for (a = 0; a < 3; a++) { // вывод таблицы
		for (b = 0; b < 3; b++) {
			cout << table[a][b] << ' ';
		}
		cout << '\n';
	}

	for (a = 0; a < 3; a++) { // сумма строк
		sum_row = 0;
		for (b = 0; b < 3; b++) {
			sum_row += table[a][b];
		}
		if (a == 0) {
			magicSum = sum_row;
		}
		if (a > 0 && magicSum != sum_row) {
			isMagic = false;
		}
	}

	for (b = 0; b < 3; b++) { // сумма столбцов
		sum_col = 0;
		for (a = 0; a < 3; a++) {
			sum_col += table[a][b];
		}
		if (sum_col != magicSum) {
			isMagic = false;
		}
	}
	 
	for (a = 0; a < 3; a++) { // главная диагональ
		for (b = 0; b < 3; b++) {
			if (b == a) {
				sum_diag += table[a][b];
			}
		}
	}	
	if (sum_diag != magicSum) {
		isMagic = false;
	}

	for (a = 0; a < 3; a++) { // побочная диагональ
		for (b = 0; b < 3; b++) {
			if (a + b == n - 1) {
				poboch_diag += table[a][b];
			}
		}
	}
	if (poboch_diag != magicSum) {
		isMagic = false;
	}

	cout << '\n';

	if (isMagic) {
		cout << "Это магический квадрат!";
	}
	else
		cout << "Это не магический квадрат :(";

	cout << '\n';

	return 0;
}