#include <iostream>
#include <cmath>
using namespace std;
int main() {
	system("chcp 1251");
	int a, b, n; 
	cout << "������� ����� N: "; cin >> n;
	for (a = 1; a <= n; a++) 
	{
		b = a * a;
		cout << b << " ";
	}
	return 0;
}