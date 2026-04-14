#include <iostream>
#include <cstring>
using namespace std;
int main() {
	system("chcp 65001");
	char str[80];
	strcpy_s(str, "Привет");
	cout << str;
}