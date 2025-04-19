#include <iostream>
#include <cmath>   // Для pow()
#include <limits>  // Для numeric_limits
using namespace std;

// Объявления функций
void inputThreeDigitNumber(int &X);
void inputDigitN(int &N);
void findFirstDigit(int X);
void findNDigit(int X, int N);

int main() {
    int X = 0;
    int N = 0;
    int choice = 0;

    do {
        cout << "Меню:\n";
        cout << "1. Ввести целое трёхзначное число X\n";
        cout << "2. Ввести цифру N (меньше числа разрядов числа X)\n";
        cout << "3. Найти первую цифру числа X\n";
        cout << "4. Найти N-ю цифру числа X (нумерация справа налево)\n";
        cout << "5. Выход\n";
        cout << "Выбор: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputThreeDigitNumber(X);
                break;
            case 2:
                inputDigitN(N);
                break;
            case 3:
                findFirstDigit(X);
                break;
            case 4:
                findNDigit(X, N);
                break;
            case 5:
                cout << "Выход из программы.\n";
                break;
            default:
                cout << "Неверный выбор. Повторите попытку.\n";
        }
    } while (choice != 5);

    return 0;
}

// Функция для ввода трёхзначного числа
void inputThreeDigitNumber(int &X) {
    cout << "Введите целое трёхзначное число: ";
    while (!(cin >> X) || X < 100 || X > 999) {
        cout << "Ошибка! Число должно быть трехзначным. Повторите попытку: ";
        cin.clear();           // Очистка состояния потока
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Удаление неправильного ввода
    }
}

// Функция для ввода цифры N
void inputDigitN(int &N) {
    cout << "Введите цифру N (от 1 до 3): ";
    while (!(cin >> N) || N < 1 || N > 3) {
        cout << "Ошибка! N должно быть от 1 до 3. Повторите попытку: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

// Функция для нахождения первой цифры числа X
void findFirstDigit(int X) {
    if (X >= 100 && X <= 999) {
        int firstDigit = X / 100;
        cout << "Первая цифра числа X: " << firstDigit << endl;
    } else {
        cout << "Число X должно быть трёхзначным!\n";
    }
}

// Функция для нахождения N-й цифры числа X
void findNDigit(int X, int N) {
    if (X >= 100 && X <= 999 && N > 0 && N <= 3) {
        int nDigit = (X / static_cast<int>(pow(10, N - 1))) % 10;
        cout << N << "-я цифра числа X: " << nDigit << endl;
    } else {
        cout << "Некорректные данные: проверьте правильность чисел X и N\n";
    }
}