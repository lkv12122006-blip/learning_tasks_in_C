#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main() {
	system("chcp 65001");

	char str[100];
	int left = 0;
	int right, len;

	cin.getline(str, 100);
	len = strlen(str);
	right = len - 1;

	while (left < right) {
		if (tolower(str[left]) != tolower(str[right])) {
			cout << "Не Палиндром!";
			return 0;
		}
		left ++;
		right--;
	}
	cout << "Палиндром!";
	return 0;
}