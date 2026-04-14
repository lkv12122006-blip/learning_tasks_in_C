#include <iostream>
using namespace std;

int main() {
	system("chcp 65001");

    char str[150];       
    cout << "Введите предложение: ";
    cin.getline(str, 150); 

    int i = 0;             

    while (str[i] != '\0') {  

        while (str[i] == ' ') {
            i++;
        } 

        if (str[i] == '\0') {
            break;
        }

        while (str[i] != ' ' && str[i] != '\0') {
            cout << str[i];   
            i++;              
        }
        cout << '\n';
    }
    return 0;
}
