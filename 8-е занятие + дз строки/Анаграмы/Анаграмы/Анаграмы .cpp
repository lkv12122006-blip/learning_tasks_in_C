#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char a[100], b[100];
    cout << "Введите первое слово: ";
    cin.getline(a, 100);
    cout << "Введите второе слово: ";
    cin.getline(b, 100);

    int cnt[26] = { 0 };
    for (int i = 0; a[i]; i++) cnt[tolower(a[i]) - 'a']++;
    for (int i = 0; b[i]; i++) cnt[tolower(b[i]) - 'a']--;

    for (int i = 0; i < 26; i++)
        if (cnt[i]) { 
            cout << "Не анаграммы"; return 0; }
    cout << "Анаграммы";
    return 0;
}