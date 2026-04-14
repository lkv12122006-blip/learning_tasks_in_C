#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
	int magic; // ���������� �����
	int guess; // ������� ������������ 
	system("chcp 1251"); 
	srand(time(0));
	magic = rand() % 11; // �������� ��������� �����
	cout << "�������� ����� �� 1 �� 10: " << "\n";
	cin >> guess;
	if (guess == magic) cout << "** ��������� **"; else cout << "����� ����, �� �� ��������.";
	cout << "\n" << "���������� �����: " << magic; 
	return 0;
}