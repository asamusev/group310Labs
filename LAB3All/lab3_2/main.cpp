#include <iostream>
#include <iomanip>

using namespace std;

char PrintSymbol(char c) //
{
    cout << "Введённый символ: " << c << endl;
}

int main()
{
    char symbol;

    cout << "Введите символ: ";
    cin >> symbol; // Ввод значения в переменную
    PrintSymbol(symbol); // Вызов функции

    return 0;
}
