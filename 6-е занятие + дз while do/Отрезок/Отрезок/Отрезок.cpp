#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return tan(x) - x;
}

int main() {
    double a = 0.1, b = 5.0;
    double eps = 1e-6;

    while (b - a > eps) {
        double c = (a + b) / 2;
        if (f(a) * f(c) <= 0)
            b = c;
        else
            a = c;
    }

    cout << "Корень: " << (a + b) / 2 << endl;
    return 0;
}