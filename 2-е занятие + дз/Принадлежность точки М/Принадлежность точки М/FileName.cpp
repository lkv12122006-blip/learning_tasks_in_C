#include <iostream>
using namespace std;

int main() {
    system("chcp 1251");

    // ПАРАМЕТРЫ ОКРУЖНОСТЕЙ 
    int x1 = 0, y1 = 0, R1 = 5;    // пример: первая окружность
    int x2 = 3, y2 = 0, R2 = 4;    // пример: вторая окружность

    // КООРДИНАТЫ ТОЧКИ 
    int x, y;
    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;

    // 3. ВЫЧИСЛЕНИЯ
    double dist1 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
    double dist2 = (x - x2) * (x - x2) + (y - y2) * (y - y2);
    double R1_squared = R1 * R1;
    double R2_squared = R2 * R2;

    // 4. ПРОВЕРКА
    if (dist1 <= R1_squared && dist2 <= R2_squared) 
        cout << "Точка принадлежит пересечению" << endl;
    
    else 
        cout << "Точка НЕ принадлежит пересечению" << endl;
    
    return 0;
}