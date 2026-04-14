#include <iostream>
using namespace std;
int main() {
	system("chcp 65001");
    double list[7];
        cout << "Введите температуру воздуха за неделю.\n";
        cout << "Понедельник -> "; cin >> list[0];
        cout << "Вторник -> "; cin >> list[1];
        cout << "Среда -> "; cin >> list[2];
        cout << "Четверг -> "; cin >> list[3];
        cout << "Пятница -> "; cin >> list[4];
        cout << "Суббота-> "; cin >> list[5];
        cout << "Воскресенье -> "; cin >> list[6];
        double sum = 0;
        for (int i = 0; i < 7; i++)
        {
            sum += list[i];
        }
        double average = sum / 7;
        cout << "Средняя температура за неделю: " << average;
        return 0;
}