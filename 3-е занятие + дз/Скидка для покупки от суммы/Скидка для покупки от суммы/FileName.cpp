#include <iostream>
using namespace std;

int main() {
	system("chcp 1251");
	double summa, finalSum;
	cout << "Введите сумму покупки -> ";
	cin >> summa;
	if (summa < 500.01)
	{
		cout << "Дополните покупку до 500 руб, чтобы получить минимальную скидку!";
	}
	else if (summa <= 1000)
	{
		finalSum = summa * 0.97;
		cout << "Вам предоставлена скидка 3%" << "\n";
		cout << "Сумма с учётом скидки: " << finalSum << " руб.";
	}
	else
	{
		finalSum = summa * 0.95;
		cout << "Вам предоставлена скидка 5%" << "\n";
		cout << "Сумма с учётом скидки: " << finalSum << " руб.";
	}
	return 0;
}