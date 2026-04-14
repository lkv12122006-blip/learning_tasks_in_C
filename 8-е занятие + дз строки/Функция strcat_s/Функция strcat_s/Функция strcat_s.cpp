#include <iostream>
#include <cstring>
using namespace std;
int main() {
	system("chcp 65001");
	char s1[40], s2[10];
	strcpy_s(s1, "Привет ");
	strcpy_s(s2, "всем!");
	strcat_s(s1, s2);
	cout << s1;
	return 0;
}