#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	system("chcp 65001");
	int i, j, n;
	int list[100];
	srand(time(0));
	cout << "Введите количество элементов массива: ";
	cin >> n;
	for (i = 0; i < n; i++) {
		list[i] = rand();
		cout << list[i] << " ";
	}
	cout << '\n';
	cout << "Введите индекс элемента, который нужно удалить: "; cin >> j;
	for (i = j; i < n - 1; i++)
		list[i] = list[i + 1];
	n = n - 1;
	for (i = 0; i < n; i++) cout << list[i] << " ";
	cout << '\n';
	return 0;
}