#include <iostream>
#include <cmath>
using namespace std;
int main() {
	system("chcp 65001");
	int i, j, n, temp;
	int list[10];
	bool f;
	srand(time(0));
	for (i = 0; i < 10; i++) list[i] = rand() % 201 - 100;
	cout << "Массив: ";
	for (i = 0; i < 10; i++) cout << list[i] << " ";
	cout << '\n';
	f = true;
	i = 0;
	while (i < 10 && f)
	{
		f = false;
		for (j = 0; j < 10 - i - 1; j++)
			if (abs(list[j]) < abs(list[j + 1]))
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				f = true;
			}
	} i++;
	cout << "Отсортированный массив: ";
	for (i = 0; i < 10; i++) cout << list[i] << " ";
	return 0;

}
