#include <iostream>
#include <cmath>
using namespace std;

int main() {
	system("chcp 1251");
	int god;
	cout << "Введите год: ";
	cin >> god;
	if (((god % 4 == 0)&&(god % 100!= 0))||(god % 400 == 0))
	{
		cout << "Год високосный";
	}
	else
	{
		cout << "Год не високосный";
	}
}