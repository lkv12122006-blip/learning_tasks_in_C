#include <iostream>
using namespace std;

int main() {
	system("chcp 65001");

	char str[100];
	char result[100];
	int i;
	int j = 0;
	bool flag = 0;
	
	cout << "Введите строку: ";
	cin.getline(str, 100);

	for (i = 0; str[i] != '\0'; i++) {

		if (str[i] != ' ') {
			result[j] = str[i];
			j++;
			flag = 0;
		}

		else if (flag == 0) {
			result[j] = str[i];
			j++;
			flag = 1;
		}
	}
	result[j] = '\0';
	cout << result;
	return 0;
}