#include <iostream>
#include <cstring>
using namespace std;

int main() {
    system("chcp 65001");

    char s1[80], s2[80];
    cout << "Введите две строки:\n";
    cin.getline(s1, 80);
    cin.getline(s2, 80);

    cout << "Их длины: " << strlen(s1) << " и " << strlen(s2) << endl;

    if (strcmp(s1, s2) == 0)
        cout << "Строки равны\n";
    else
        cout << "Строки не равны\n";

    strcat_s(s1, sizeof(s1), s2);
    cout << "После объединения: " << s1 << endl;

    strcpy_s(s1, sizeof(s1), s2);
    cout << "После копирования: " << s1 << " и " << s2 << " теперь равны\n";

    return 0;
}
