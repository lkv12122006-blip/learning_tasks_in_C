#include <iostream>
using namespace std;

int main() {
    system("chcp 65001");

    char str[200];
    char words[100][100]; 
    int wordCount = 0;     

    cout << "Введите предложение: ";
    cin.getline(str, 200);

    int i = 0;
    while (str[i] != '\0') {
       
        while (str[i] == ' ') i++;

        if (str[i] == '\0') break; 

        int j = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            words[wordCount][j] = str[i];
            i++;
            j++;
        }
        words[wordCount][j] = '\0';
        wordCount++;
    }

    for (int k = wordCount - 1; k >= 0; k--) {
        cout << words[k] << " ";
    }

    return 0;
}