#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	system("chcp 65001");
	srand(time(0));

	int table[3][4];
	int a, b;

	for (a = 0; a < 3; a++) {
		for (b = 0; b < 4; b++) {
			table[a][b] = rand() % 50 + 1;
		}
	}
	
	for (a = 0; a < 3; a++) {
		for (b = 0; b < 4; b++) {
			cout << table[a][b] << ' ';
		}
		cout << '\n';
	}

	int max = table[0][0];

	for (a = 0; a < 3; a++) {
		for (b = 0; b < 4; b++) {
			if (max < table[a][b]) {
				max = table[a][b];
			}
		}
	}

	cout << "Максимум: " << max;

	return 0;
}
