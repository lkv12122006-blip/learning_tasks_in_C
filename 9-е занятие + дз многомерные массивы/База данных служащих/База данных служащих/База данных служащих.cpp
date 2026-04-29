#include <iostream>
using namespace std;

char name[2][80];
char phone[2][20];
float hours[2];
float wage[2];

int menu();
void enter();
void report();

int main()
{
    int choice;

    do {
        choice = menu();

        switch (choice) {
        case 0:
            break;
        case 1:
            enter();
            break;
        case 2:
            report();
            break;
        default:
            cout << "Попробуйте еще раз.\n\n";
        }
    } while (choice != 0);

    return 0;
}

int menu()
{
    int choice;

    cout << "0. Выход из программы\n";
    cout << "1. Ввод информации\n";
    cout << "2. Генерирование отчета\n";
    cout << "\nВыберите команду: ";
    cin >> choice;

    return choice;
}

void enter()
{
    for (int i = 0; i < 2; i++)
    {
        cout << "\nСлужащий #" << i + 1 << '\n';

        cout << "Введите фамилию: ";
        cin >> name[i];

        cout << "Введите номер телефона: ";
        cin >> phone[i];

        cout << "Введите количество отработанных часов: ";
        cin >> hours[i];

        cout << "Введите оклад за 1 час: ";
        cin >> wage[i];
    }
}

void report()
{
    cout << "\nОтчет:\n";

    for (int i = 0; i < 2; i++)
    {
        cout << "Фамилия: " << name[i]
            << ", Телефон: " << phone[i]
            << ", Зарплата за неделю: " << wage[i] * hours[i]
            << '\n';
    }
}