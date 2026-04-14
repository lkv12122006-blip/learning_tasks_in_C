#include <iostream>
using namespace std;
int main() {
	system("chcp 65001");
	double list[100];
	int k = 0;
	double sum = 0;
	double vsego = 0;
	int i, n;
	cout << "Введите количество учеников в классе: \n"; cin >> n;
	cout << "Введите рост учеников: \n";
	for (i = 0; i < n; i++)
	{
		cout << "Рост " << i + 1 << " - го ученика: "; cin >> list[i];
		sum += list[i];
		vsego = sum / n; // средний рост
	}
	cout << "Средний рост в классе: " << vsego << '\n';
	for (i = 0; i < n; i++) 
	{
		if (vsego < list[i]) 
		{
			k++;
		}
	}
	cout << "Количество учеников, рост которых выше среднего: " << k;
	return 0;	
}