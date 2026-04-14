#include <iostream>
using namespace std;
int main() {
	system("chcp 65001");
	int sample[10];
	int t;
	for (t = 0; t < 10; t++) // Ввод массива
	sample[t] = t;
	for (t = 0; t < 10; t++)
	{
		cout << t << " ";
	}
	return 0;
}