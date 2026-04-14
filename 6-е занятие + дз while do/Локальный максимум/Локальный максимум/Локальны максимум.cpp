#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");

    int prev, curr, next;
    int count = 0;

    cout << "Введите последовательность целых чисел (0 для окончания):\n";

    // Вводим первое число
    cin >> prev;
    if (prev == 0) {
        cout << "Количество локальных максимумов: 0\n";
        return 0;
    }

    // Вводим второе число
    cin >> curr;
    if (curr == 0) {
        cout << "Количество локальных максимумов: 0\n";
        return 0;
    }

    do {
        cin >> next;
        if (next == 0) break; // конец последовательности

        if (curr > prev && curr > next) {
            count++;
        }

        // Сдвигаем окно: теперь предыдущим становится текущее,
        // а текущим – только что введённое следующее
        prev = curr;
        curr = next;

    } while (true); // выход по break внутри цикла

    cout << "Количество локальных максимумов: " << count << endl;
    return 0;
}
