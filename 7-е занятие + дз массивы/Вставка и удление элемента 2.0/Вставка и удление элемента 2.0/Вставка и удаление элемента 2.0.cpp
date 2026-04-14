#include<iostream>
#include<cstdlib>
using namespace std;
int main() {
	int i, j, n, temp, min_value, k;
	int list[100];
	bool f;
	system("chcp 65001");
	srand(time(0));
	cout << "Введите количество элементов массива ";
	cin >> n;
	for (i = 0; i < n; i++) list[i] = rand();
	for (i = 0; i < n; i++) cout << list[i] << " ";
	cout << '\n';
	cout << "Введите индекс элемента, куда нужно вставить "; cin >> j;
	cout << "Введите элемент для вставки "; cin >> temp;
	for (i = n; i > j; i--)
		list[i] = list[i - 1];
	n = n + 1;
	list[j] = temp;
	for (i = 0; i < n; i++) cout << list[i] << " ";
	cout << '\n';
	return 0;
}
