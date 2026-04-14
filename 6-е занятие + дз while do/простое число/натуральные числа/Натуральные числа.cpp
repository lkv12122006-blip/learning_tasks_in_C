#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    int a, b;
    cout << "Введите начало диапазона: ";
    cin >> a;
    cout << "Введите конец диапазона: ";
    cin >> b;
    if (a < 2) a = 2;
    for (int num = a; num <= b; num++) {
        bool prost = true;
        for (int d = 2; d * d <= num; d++) {
            if (num % d == 0) {
                prost = false;
                break;
            }
        }
        if (prost) cout << num << " ";
    }
    return 0;
}