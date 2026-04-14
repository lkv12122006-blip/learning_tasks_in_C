#include <iostream>

using namespace std;
int main()
{
	double tomato, cucumbers, dill, price_1, price_2, price_3, summa_pomidors, summa_gurts, summa_petrushka, total;
	system("chcp 1251");
	cout << "Введите цену помидоров:";
	cin >> price_1; // Ввод цены помидоров. 
	cout << "Введите вес помидоров в кг:";
	cin >> tomato; // Ввод веса помидоров.
	cout << "Введите цену огурцов:";
	cin >> price_2; // Ввод цены огурцов. 
	cout << "Введите вес огурцов в кг:";
	cin >> cucumbers; // Ввод веса помидоров.
	cout << "Введите цену петрушки:";
	cin >> price_3; // Ввод цены петрушки. 
	cout << "Введите вес петрушки в кг:";
	cin >> dill; // Ввод веса петрушки.
	summa_pomidors = price_1 * tomato; // Вычисление суммы помидоров.
	summa_gurts = price_2 * cucumbers; // Вычисление суммы огурцов. 
	summa_petrushka = price_3 * dill; // Вычисление суммы петрушки.
	total = summa_pomidors + summa_gurts + summa_petrushka;
	cout << "Сумма итого за всю покупку: " << total;
	return 0;
}