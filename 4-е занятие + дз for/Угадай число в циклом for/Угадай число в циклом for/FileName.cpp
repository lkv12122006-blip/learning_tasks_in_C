#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	system("chcp 1251");
	int magic; // Магическое число
	int guess; // Вариант пользователя
	int n, count, i, success;
	srand(time(0));
	cout << "Введите диапазон: "; cin >> n;
	cout << "Введите количество попыток: "; cin >> count;
	success = 0;
	for (i = 0; i < count; i++)
	{
		magic = rand() % (n + 1); // Получаем случайное число
		cout << "Введите свой вариант числа: ";
		cin >> guess;
		if (guess == magic)
		{
			cout << "Правильно! \n"; success = success + 1;
		} 
	else cout << "Очень жаль, но вы ошиблись. \n";
	}
	cout << "Вы угадали: " << success << " раз";
	return 0;
}

