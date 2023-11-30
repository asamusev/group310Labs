#include <iostream>
#include <iomanip>

using namespace std;

double Cube(double a) // Функция возвращаемая куб числа
{
    double c = a*a*a;
    return c; // Возвращение значение переменной
}

int main()
{
    double num, c;

    cout << "Введите число: ";
    cin >> num; // Ввод значения
    c = Cube(num); // Присвоение значения возвращаемой функции
    cout << "Куб числа " << num << " равен " << c << endl; // Вывод ответа

    return 0;
}
