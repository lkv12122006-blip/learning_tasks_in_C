#include <iostream>
#include <cmath>
using namespace std;
int main() {
	system("chcp 65001");
	double y, x;
	cout << "_________________________\n";
	cout << "|    x    |       y     |\n";
	cout << "_________________________\n";
	for (x = -4; x <= 4; x += 0.5) 
	{
	y = abs(x - 2) + abs(x + 1);
	cout << x << "\t\t" << y << '\n';
	}
	cout << "_________________________\n";
	return 0;
}