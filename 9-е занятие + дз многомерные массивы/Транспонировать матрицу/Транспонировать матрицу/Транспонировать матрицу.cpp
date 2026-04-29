#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	system("chcp 65001");
	srand(time(0));

	int table_a[10][10];
	int table_b[10][10];
	int a, b;

	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			table_a[a][b] = rand() % 10;
		}
	}
	
	cout << "Исходная таблица: \n";

	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			cout << table_a[a][b] << ' ';
		}
	cout << '\n';
	}
	
	cout << '\n';

	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			table_b[b][a] = table_a[a][b];
		}
	}

	cout << "Транспонированнная таблица: \n";

	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			cout << table_b[a][b] << ' ';
		}
	cout << '\n';
	}
}