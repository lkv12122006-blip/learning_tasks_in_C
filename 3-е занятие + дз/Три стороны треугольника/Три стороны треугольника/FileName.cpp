#include <iostream>
#include <cmath>

using namespace std;

int main() {
	system("chcp 1251");
	double a, b, c, p, s;
	cout << "Введите длины сторон треугольника: ";
	cin >> a >> b >> c;
	if (a < b + c && b < a + c && c < a + b) 
	{	
		p = (a + b + c) / 2.0;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << "Площадь треугольника равна: " << s;
	}
	else
		cout << "Такого треугольника не существует!";
	return 0;
}

