#include <iostream>
#include <windows.h>

const int ROWS = 3;
const int COLS = 5;

int main() {
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Ввод элементов массива
    double arr[ROWS][COLS];
    for (int i = 0; i < ROWS; i++) {
        std::cout << "Введите элементы " << (i + 1) << "-й строки (через пробел): ";
        for (int j = 0; j < COLS; j++) {
            std::cin >> arr[i][j];
        }
    }

    // Вычисление среднего арифметического элементов строк
    for (int i = 0; i < ROWS; i++) {
        double sum = 0;
        for (int j = 0; j < COLS; j++) {
            sum += arr[i][j];
        }
        double average = sum / COLS;
        std::cout << "Среднее арифметическое элементов " << (i + 1) << "-й строки: " << average << std::endl;
    }

    return 0;
}
