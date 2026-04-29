#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	system("chcp 65001");
	srand(time(0));

	double table[10][10];
	int a, b;
	int sum_chisl = 0;

	cout << '\n';
	 
	cout << "Таблица: \n";

	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			table[a][b] = rand() % 100 + 1;
 		}
	}

	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			cout << table[a][b] << ' ';
		}
		cout << '\n';
	}

	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			if (b > a) {
				sum_chisl += table[a][b];
			}
		}
	}

	cout << '\n';

	cout << "Сумма элементов над главной диагональю: " << sum_chisl << ' ';

	cout << '\n';

	return 0;
}