#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	system("chcp 65001");
	int i, min, max;
	int list[10];
	srand(time(0));
	for (i = 0; i < 10; i++)
	{
		list[i] = rand();
	}
	min = list[0];
	max = list[0];
	for (i = 0; i < 10; i++)
	{
		if (min > list[i]) min = list[i];
		if (max < list[i]) max = list[i];
	}
	cout << "Минимальное значение: " << min << '\n';
	cout << "Максимальное значение: " << max << '\n';
return 0;
}