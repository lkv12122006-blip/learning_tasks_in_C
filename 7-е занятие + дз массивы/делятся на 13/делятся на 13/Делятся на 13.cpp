#include <iostream>
using namespace std;

int main() {
    system("chcp 65001"); 

    const int MAX_SIZE = 10;
    const int RESULT_SIZE = 2 * MAX_SIZE; 

    int n;
    cout << "Введите размер массива (не более " << MAX_SIZE << "): ";
    cin >> n;

    if (n < 1 || n > MAX_SIZE) {
        cout << "Некорректный размер.\n";
        return 1;
    }
    int arr[MAX_SIZE];    
    int result[RESULT_SIZE]; 
    cout << "Введите " << n << " целых чисел:\n";
    for (int i = 0; i < n; i++) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> arr[i];
    }
    int j = 0; 
    for (int i = 0; i < n; i++) {
        result[j] = arr[i];
        j++;

        if (arr[i] % 13 == 0) {
            result[j] = arr[i] / 13;
            j++;
        }
    }
    cout << "Полученный массив:\n";
    for (int i = 0; i < j; i++) {
        cout << result[i] << " ";
    }
    cout << '\n';
    return 0;
}