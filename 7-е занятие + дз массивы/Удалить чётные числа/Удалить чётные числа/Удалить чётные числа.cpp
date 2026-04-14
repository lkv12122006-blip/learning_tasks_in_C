#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("chcp 65001");
    srand(time(0));
    int list[10];
    int i;
    int n = 10;
    for (i = 0; i < n; i++) 
    {
        list[i] = rand() % 101;
    }
    cout << "Исходный массив: ";
    for (i = 0; i < n; i++) 
    {
        cout << list[i] << " ";
    }
    cout << '\n';

    int new_n = 0; 
    for (i = 0; i < n; i++) 
    {
        if (list[i] % 2 != 0)
        {
            list[new_n] = list[i];
            new_n++;
        }
    }
    n = new_n;
    cout << "Массив после удаления чётных: ";
    for (i = 0; i < n; i++) {
        cout << list[i] << " ";
    }
    cout << '\n';
    return 0;
}