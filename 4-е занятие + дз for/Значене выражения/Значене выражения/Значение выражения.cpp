#include <iostream>
#include <cmath>
using namespace std;
int main() {
	system("chcp 65001");
    double sum = 0.0;
    for (int i = 99; i >= 3; i -= 3) 
    {
        sum = sqrt(sum + i);
    }
    cout << "Сумма = " << sum << endl;
    return 0;
}