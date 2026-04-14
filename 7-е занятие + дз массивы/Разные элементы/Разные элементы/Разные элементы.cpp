#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	system("chcp 65001");
	int i, j;
	int list[10];
	int countUnique = 0;
	srand(time(0));
	for (i = 0; i < 10; i++) 
		list[i] = rand() % 201 - 100;
	cout << "Массив: ";
	for (i = 0; i < 10; i++) 
		cout << list[i] << " ";
	cout << '\n';
	for (i = 0; i < 10; i++)
	{
		bool isUnique = true;
		for (j = 0; j < 10; j++)
		{
			if (i != j && list[i] == list[j]) {
				isUnique = false;
				break;
			}
		}if (isUnique) {
			countUnique++;
		}
	}cout << "Количество элементов, встречающихся только один раз: " << countUnique;
	return 0;
}