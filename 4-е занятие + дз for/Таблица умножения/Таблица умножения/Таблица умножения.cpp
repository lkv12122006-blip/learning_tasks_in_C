#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main() {
	system("chcp 65001");
	int a, b, c, d;
	int v = 0;
	for (d = 0; d < 10; d++) 
	{
	srand(time(0));
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;
	cout << "Чему равно " << a << " " << "*" << " " << b << " = "; 
	cin >> c;
	if (a * b == c)
	{
		cout << "Верно!" << '\n';
		v++;
	}
	else
		cout << "Неверно!" << '\n';
	}
	if (v == 10)
	{
		cout << "Ваша отметка: Отлично!" << '\n';
	}
	else if (v == 9 || 8)
	{
		cout << "Ваша отметка: Хорошо!" << '\n';
	}
	else if (v == 7 || 6)
	{
		cout << "Ваша отметка: Удовлетворительно!" << '\n';
	}
	else
	{
		cout << "Ваша отметка: Плохо!" << '\n';
	}
	return 0;
}

