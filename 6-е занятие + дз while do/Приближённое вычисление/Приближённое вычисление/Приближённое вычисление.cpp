#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    system("chcp 65001");
    double x;
    cout << "Введите x: ";
    cin >> x;
    const double eps = 1e-3;  // заданная точность
    double sum = 1.0;          // начальное слагаемое (i = 0)
    double term = 1.0;         // текущее слагаемое (для i = 0)
    int i = 0;                 // номер текущего члена (начиная с 0)

    // Вычисляем следующие слагаемые, пока модуль очередного не станет меньше eps
    while (true) {
        // следующее слагаемое: term * x^2 / ((2i+1)*(2i+2))
        double next_term = term * x * x / ((2 * i + 1) * (2 * i + 2));
        if (fabs(next_term) < eps) break;  // достигнута требуемая точность
        sum += next_term;
        term = next_term;
        i++;
    }

    cout << "Приближённое значение ch(" << x << ") = " << sum << endl;
    cout << "Точное значение (cosh) = " << cosh(x) << endl;

    return 0;
}