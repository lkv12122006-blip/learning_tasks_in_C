#include <iostream>
using namespace std;
int main() {
	system("chcp 65001");
	const int a = 10;
	double list[a];
	int i;
	cout << "Введите массив из 10 чисел: \n";
	for (i = 0; i < 10; i++)
	{
		cout << "Число " << i + 1 << ": ";
		cin >> list[i];
	}
	bool d = true;
	for (i = 0; i < a - 1; i++)
	{
		if (list[i] >= list[i + 1])
		{
			d = false;
			break;
		}
	}
	if (d)
	{
		cout << "Массив образует возрастающую последовательность.\n";
	}
	else
		cout << "Массив НЕ является возрастающей последовательностью.\n";

	return 0;
}