#include <iostream>
#include <cstring>
using namespace std;

int main() {
    system("chcp 1251"); 

    char str[200];
    cout << "Введите строку: ";
    cin.getline(str, 200);

    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        char a = str[left];
        char b = str[right];

     
        if (a >= 'А' && a <= 'Я') a = a + ('а' - 'А');
        if (a == 'Ё') a = 'ё';
        if (b >= 'А' && b <= 'Я') b = b + ('а' - 'А');
        if (b == 'Ё') b = 'ё';

        if (a != b) {
            cout << "Не палиндром" << endl;
            return 0;
        }
        left++;
        right--;
    }
    cout << "Палиндром" << endl;
    return 0;
}