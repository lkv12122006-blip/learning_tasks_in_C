#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	system("chcp 65001");
	char str[80];
	cout << "Введите строку для считывания: ";  cin.getline(str, 80);
	cout << "Вот ваша строка: " << str;
	return 0;
}