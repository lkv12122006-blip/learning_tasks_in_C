#include <iostream>
using namespace std;

int main() {
    char str[200];
    char result[400];
    cout << "Введите строку: ";
    cin.getline(str, 200);

    int i = 0, j = 0;
    while (str[i] != '\0') {
        char cur = str[i];
        int count = 0;
        while (str[i] == cur) {
            count++;
            i++;
        }
        result[j++] = cur;
        result[j++] = '0' + count; 
    }
    result[j] = '\0';
    cout << result << endl;
    return 0;
}