#include <iostream>
#include <cmath>
using namespace std;
int main() {
	system("chcp 65001");
	int a, b;
	cout << "Введите кол-во столбцов";
	cin >> a;
	cout << "Введите кол-во строчек";
	cin >> b;
	for (int i = 1; i <= b; i++) {
		for (int j = 1; j <= a; j++) {
			if (j != a) {
				cout << " " << (i * j) << " ";
			}
			else {
				cout << " " << (i * j) << '\n';
			}
		}
	}
}