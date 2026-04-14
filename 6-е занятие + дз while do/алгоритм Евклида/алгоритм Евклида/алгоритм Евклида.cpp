#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    system("chcp 65001"); 

    int a, b;
    cout << "Введите первое целое число: ";
    cin >> a;
    cout << "Введите второе целое число: ";
    cin >> b;

    // Берём абсолютные значения
    a = abs(a);
    b = abs(b);

    // Обработка случаев, когда одно из чисел равно нулю
    if (a == 0) {
        cout << "НОД = " << b << '\n';
        return 0;
    }
    if (b == 0) {
        cout << "НОД = " << a << '\n';
        return 0;
    }

    // Алгоритм Евклида (метод вычитания)
    while (a != b) {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }

    cout << "НОД = " << a << endl;

    return 0;
}