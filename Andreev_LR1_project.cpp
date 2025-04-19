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

// Пустые реализации функций
void inputThreeDigitNumber(int &X)
{
// Реализация будет добавлена позже - ветка branch_fun_1
}

void inputDigitN(int &N)
{
// Реализация будет добавлена позже - ветка branch_fun_2
}

void findFirstDigit(int X)
{
// Реализация будет добавлена позже - ветка branch_fun_3
}

void findNDigit(int X, int N)
{
// Реализация будет добавлена позже - ветка branch_fun_4
}