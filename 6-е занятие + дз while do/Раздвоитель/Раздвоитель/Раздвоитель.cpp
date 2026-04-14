#include <iostream>
using namespace std;

int main() {
    int A, B;
    cout << "Введите начальное число: \n" ;
    cin >> A;
    cout << "Введите целевое число: \n";
    cin >> B;
    while (A > B) {
        if (A % 2 == 0 && A / 2 >= B) {
            cout << ":2" << '\n';
            A /= 2;
        }
        else {
            cout << "-1" << '\n';
            A--;
        }
    }
    return 0;
}