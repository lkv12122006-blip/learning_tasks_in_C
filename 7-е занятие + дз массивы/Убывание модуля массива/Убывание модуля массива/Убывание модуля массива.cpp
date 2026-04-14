#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	system("chcp 65001");
	srand(time(0));
	int list[10];
	int i, j, k, temp, min_value;
	for (i = 0; i < 10; i++) list[i] = rand() % 201 - 100;
	cout << "Массив: \n";
	for (i = 0; i < 10; i++) cout << list[i] << " ";
	cout << '\n';
	for (i = 0; i < 10 - 1; i++)
	{
		min_value = list[i];
		k = i;
		for (j = i + 1; j < 10; j++)
		{
			if (list[j] < min_value)
			{
				k = j;
				min_value = list[j];
			}
		}
		temp = list[i];
		list[i] = list[k];
		list[k] = temp;
	}
	cout << "Отсортированный массив: ";
	for (i = 0; i < 10; i++)
	{
		cout << list[i] << " ";
	}
	return 0;
}