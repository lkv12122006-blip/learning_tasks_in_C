#include <iostream>
using namespace std;

int main() {
    system("chcp 65001"); 

    double x, y;
    cout << "Введите пробег в первый день (км): ";
    cin >> x;
    cout << "Введите целевой пробег (км): ";
    cin >> y;

    int day = 1;
    double distance = x;

    while (distance < y) {
        distance *= 1.1; 
        day++;
    }

    cout << "Номер дня, когда пробег достигнет не менее " << y << " км: " << day << '\n';

    return 0;
}