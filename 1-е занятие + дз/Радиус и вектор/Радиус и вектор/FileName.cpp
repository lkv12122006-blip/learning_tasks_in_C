#include <iostream>
using namespace std;

int main()
{
	double Square, Volume, radius;
	const double PI = 3.141592653589793238;
	system("chcp 1251");
	cout << "Введите радиус сферы:";
	cin >> radius; // Ввод данных от пользователя. 
	Square = 4 * PI * radius * radius; // Вычисление Площади поверхности сферы 
	Volume = 4.0 / 3.0 * PI * radius * radius * radius; // Вычисление объёма сферы
	cout << "Площадь: " << Square << "\n";
	cout << "Объём: " << Volume;
	return 0;
}