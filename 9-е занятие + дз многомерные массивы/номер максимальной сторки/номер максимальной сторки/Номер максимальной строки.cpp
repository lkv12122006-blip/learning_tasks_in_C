#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	system("chcp 65001");
	srand(time(0));

	int table[4][4];
	int a, b;
	int sum_row = 0;
	int max = 0;
	int max_sum_row_index = 0;

	for (a = 0; a < 4; a++) {
		for (b = 0; b < 4; b++) {
			table[a][b] = rand() % 10 + 1;
		}
	}

	cout << '\n' << "Таблица: \n";

	for (a = 0; a < 4; a++) {
		for (b = 0; b < 4; b++) {
			cout << table[a][b] << ' ';
		}
		cout << '\n';
	}

	cout << '\n';

	for (a = 0; a < 4; a++) {
		sum_row = 0;

		for (b = 0; b < 4; b++) {
			sum_row += table[a][b];
		}
		cout << "Сумма " << a + 1 << " строки: " << sum_row << '\n';
		if (max < sum_row) {
			max = sum_row;
			max_sum_row_index = a + 1;
		}
	}

	cout << '\n';
	cout << "Номер строки с максимальной суммой: " << max_sum_row_index;
	cout << '\n';

	return 0;
}