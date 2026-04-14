#include <iostream>
using namespace std;

int main() {
    system("chcp 1251"); // ������������� ������� �������� �������

    cout << "Привет:\n\n";
    cout << "1. for\n";
    cout << "2. if\n";
    cout << "3. switch\n\n";
    cout << "������� ����� ���� (1 - 3): ";

    int choice;
    cin >> choice;
    cout << "\n";

    switch (choice) {
    case 1:
        cout << "for - ��� ����� ������������� ���� � C++.\n"; break;
    case 2:
        cout << "if - ��� ���������� ��������� ���������.\n"; break;
    case 3:
        cout << "switch -  ��� ���������� ������������������ ���������.\n"; break;
    default:
        cout << "�� ������ ������ ����� �� 1 �� 3.\n";
    }
    return 0;
}