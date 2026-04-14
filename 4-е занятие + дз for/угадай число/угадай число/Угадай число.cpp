#include <iostream> 
#include <cstdlib>
using namespace std;
int main() {
	int magic; // магическое число 
	int guess; // вариант пользователя 
	int n, count, i, suсcess;
	srand(time(0));
	cout << "Введите диапазон : "; cin >> n;
	suсcess = 0;
	for (i = 0; i < 6; i++)
	{
		magic = rand() % n; // Получаем случайное число.
		cout << "Введите свой вариант магического числа: ";
		cin >> guess;
		if (guess == magic) { cout << "** Правильно **\n"; suсcess = suсcess + 1; }
		else if (guess > magic) {
			cout << "...Очень жаль, но вы ошиблись. Ваше число больше загаданного \n";
		}
		else
			cout << "Очень жаль, но вы ошиблись. Ваше число меньше загадонного ";
	}
	cout << "Вы угадали " << suсcess << " раз";
	return 0;
}
