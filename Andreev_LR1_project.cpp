#include <iostream>
using namespace std;

// Объявление функций с пустыми телами
void inputThreeDigitNumber(int &X);
void inputDigitN(int &N);
void findFirstDigit(int X);
void findNDigit(int X, int N);

int main()
{
    int X = 0;
    int N = 0;
    int choice = 0;

    do {
        cout << "Меню (почти как в ресторане):\n";
        cout << "1. Ввести целое трёхзначное число X (стоит столько-то баллов)\n";
        cout << "2. Ввести цифру N (меньше числа разрядов числа X (стоит столько-то баллов))\n";
        cout << "3. Найти первую цифру числа X (стоит столько-то баллов)\n";
        cout << "4. Найти N-ю цифру числа X (нумерация справа налево (стоит столько-то баллов))\n";
        cout << "5. Выход (стоит 0 баллов)\n";
        cout << "Татьяна Викторовна, выбор за Вами: ";
        cin >> choice;

        switch (choice)
        {
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
                cout << "Неверный выбор. Пожалуйста, попробуйте ещё раз.\n";
        }
    } 
    while (choice != 5);

    return 0;
}

// Функция для ввода трёхзначного числа
void inputThreeDigitNumber(int &X)
{
    cout << "Введите целое трёхзначное число: ";
    cin >> X;
    if (X < 100 || X > 999)
    {
        cout << "Ошибка: число должно быть только трёхзначным и никак иначе.\n";
        X = 0; // Сбрасывание значения
    }
}

// Функция для ввода цифры N
void inputDigitN(int &N) {
    cout << "Введите цифру N (меньше числа разрядов числа X): ";
    cin >> N;
    if (N < 1 || N > 3) {
        cout << "Ошибка: N должно быть в диапазоне от 1 до 3.\n";
        N = 0; // Сбрасывание значения
    }
}

// Функция для нахождения первой цифры числа X
void findFirstDigit(int X) {
    if (X != 0) {
        int firstDigit = X / 100; // Первая цифра
        cout << "Первая цифра числа X: " << firstDigit << endl;
    } else {
        cout << "Сначала введите трёхзначное число.\n";
    }
}

// Функция для нахождения N-й цифры числа X
void findNDigit(int X, int N) {
    if (X != 0 && N > 0) {
        int nDigit = (X / static_cast<int>(pow(10, N - 1))) % 10; // N-я цифра
        cout << N << "-я цифра числа X: " << nDigit << endl;
    } else {
        cout << "Сначала введите трёхзначное число и цифру N.\n";
    }
}
