#include <iostream>
#include <cstring>
using namespace std;

int main() {
    system("chcp 65001");

    char words[5][80];
    int i, j;
    char temp[80];

    cout << "Введите список слов:\n";

    for (i = 0; i < 5; i++) {
        cin.getline(words[i], 80);
    }

    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - 1 - i; j++) {
            if (strcmp(words[j], words[j + 1]) > 0) {
                strcpy_s(temp, words[j]);
                strcpy_s(words[j], words[j + 1]);
                strcpy_s(words[j + 1], temp);
            }
        }
    }

    cout << "Отсортированный список: \n";

    for (i = 0; i < 5; i++) {
        cout << words[i] << '\n';
    }

    return 0;
}