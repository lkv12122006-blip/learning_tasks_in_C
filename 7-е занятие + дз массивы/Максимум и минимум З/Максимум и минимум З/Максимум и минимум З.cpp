#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("chcp 65001");
    int i;
    int firstNegIndex = -1;   
    int lastPosIndex = -1;    
    int list[10];
    srand(time(0));
    for (i = 0; i < 10; i++) 
    {
        list[i] = rand() % 201 - 100;
    }
    cout << "Массив: ";
    for (i = 0; i < 10; i++) 
    {
        cout << list[i] << " ";
    }
    cout << '\n';
    for (i = 0; i < 10; i++) {
        if (list[i] < 0) {
            firstNegIndex = i;
            break;                   
        }
    }
    for (i = 9; i >= 0; i--) {
        if (list[i] > 0) {
            lastPosIndex = i;       
            break;                    
        }
    }

    if (firstNegIndex != -1) {
        cout << "Первый отрицательный элемент: значение " << list[firstNegIndex]
            << ", номер: " << firstNegIndex + 1 << endl;
    }
    else {
        cout << "Отрицательных элементов нет!" << endl;
    }

    if (lastPosIndex != -1) {
        cout << "Последний положительный элемент: значение " << list[lastPosIndex]
            << ", номер: " << lastPosIndex + 1 << endl;
    }
    else {
        cout << "Положительных элементов нет!" << endl;
    }

    return 0;
}