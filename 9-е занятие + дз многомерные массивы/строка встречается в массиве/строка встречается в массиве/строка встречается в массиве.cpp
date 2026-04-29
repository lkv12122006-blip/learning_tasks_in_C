#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	system("chcp 65001");
	srand(time(0));

	int table[10][10];
	int a, b, i, k;
	int count;
	bool equal = true;

	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			table[a][b] = rand() % 10 + 1;
		}
	}
	
	for (a = 0; a < 10; a++) {
		for (b = 0; b < 10; b++) {
			cout << table[a][b] << ' ';
		}
		cout << '\n';
	}
	
	for (a = 0; a < 10; a++) {
		count = 0;
		for (b = 0; b < 10; b++) {
			equal = true;
			for (k = 0; k < 10; k++) {
				if (table[a][k] != table[b][k]) {
					equal = false;
					break;
				}
			}
			if (equal) {
				count++; 
			}
		}
		cout << "Строка " << a << " встречается " << count << " раз(а)\n";
	}
}