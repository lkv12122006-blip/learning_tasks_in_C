#include <iostream>
using namespace std;
int main() {
	system("chcp 1251");
	int a, b, c;
	cout << "¬ведите рост: "; cin >> a;
	cout << "¬ведите вес: "; cin >> b;
	c = a - 100;
	if (b == c)
	{
		cout << "¬аш вес оптимальный!";
	}
	else if (b > c)
	{
		cout << "¬аш вес выше оптимального, стоит похудеть.";
	}
	else
		cout << "¬аш вес ниже оптимального, стоит поправитьс€.";
	return 0;
}