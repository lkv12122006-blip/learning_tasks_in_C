#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int magic;
	int guess;
	int N;
	system("chcp 65001");
	cout << "Введите диапозон: ";
	cin >> N;
	srand(time(0));
	magic = rand() % (N + 1); 
	do {
		cout << "Введите свой вариант числа: ";
		cin >> guess;
		if (guess == magic) {
			cout << "Правильно! ";
			cout << magic << " И есть то самое число. \n";
		}
		else {
			cout << "Очень жаль, но вы ошиблись";
			if (guess > magic)
				cout << " Ваш вариант превышает число. \n";
			else cout << " Ваш вариант меньше магического числа. \n";
		}
	} while (guess != magic);
	return 0;
}