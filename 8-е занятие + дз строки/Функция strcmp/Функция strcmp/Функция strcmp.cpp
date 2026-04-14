#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

bool password();

int main() {
    if (password()) {
        cout << "Вход разрешен.\n";
    }
    else {
        cout << "В доступе отказано.\n";
    }
    return 0;
}

// Функция возвращает значение true, если пароль принят, и false в противном случае.
bool password() {
    char s[80];
    cout << "Введите пароль: ";
    cin.getline(s, 80);
    if (strcmp(s, "пароль") != 0) { // строки не равны
        cout << "Пароль недействителен.\n";
        return false;
    }
    // строки совпадают
    return true;
}