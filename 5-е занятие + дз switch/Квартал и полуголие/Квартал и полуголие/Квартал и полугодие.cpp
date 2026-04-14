#include <iostream>
using namespace std;
int main() {
	system("chcp 65001");
	int m;
	cout << "Введите месяц: "; cin >> m;
	switch (m) {
	case 1:
	case 2:
	case 3:
		cout << "Первый квартал \n"; 
		cout << "Первое полугодие";
		break;
	case 4:
	case 5:
	case 6:
		cout << "Второй квартал \n";
		cout << "Первое полугодие";
		break;
	case 7:
	case 8:
	case 9:
		cout << "Третий квартал \n";
		cout << "Второе полугодие";
		break;
	case 10:
	case 11:
	case 12:
		cout << "Четвёртый квартал \n";
		cout << "Второго полугодие";
		break;
	default: cout << "Месяц введён некорректно!";
	}
	return 0;
}