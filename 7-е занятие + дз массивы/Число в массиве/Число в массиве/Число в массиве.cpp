#include <iostream>
using namespace std;
int main() {
	system("chcp 65001");
	int i;
	double list[10];
	double a;
	cout << "Введите массив из 10 чисел: \n";
	for (i = 0; i < 10; i++) {
		cout << "Число " << i + 1 << ": ";
		cin >> list[i];
	}
	cout << "Введите искомое число: ";
	cin >> a;

	int count = 0;
	for (i = 0; i < 10; i++) {
		if (list[i] == a) {
			count++;
		}
	}
	if (count > 0)
	{
		cout << "Число " << a << " встречается в массиве " << count << " раз(а). \n";
	}
	else
	{
		cout << "Число " << a << " не найдено в массиве.";
	}
	return 0;
}
