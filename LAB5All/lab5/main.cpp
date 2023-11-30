#include <iostream>
#include <iomanip>
#include "unit_1.h"
#include "unit_2.h"
#include "unit_3.h"
#include "unit_4.h"

using namespace std;
void U1()
{
    int ma, mi, av;
    ma = Max(5,9);
    mi = Min(2,5);
    av = Average(6,8);
    cout << ma << endl;
    cout << mi << endl;
    cout << av << endl;
}

void U2()
{
    int mm = 17;
    float f;
    f = CM(mm);
    cout << mm << " мм " << "= " << f << " см " << endl;
    f = M(mm);
    cout << mm << " мм " << "= " << f << " м " << endl;
}

void U3()
{
    cout << "int: " << IntCast(2,1.2f,5.6,1) << endl;
    cout << "float: " << FloatCast(2,1.2f,5.6,1) << endl;
    cout << "double: " << DoubleCast(2,1.2f,5.6,1) << endl;
    cout << "Uint: " << UnIntCast(2,1.2f,5.6,1) << endl;
    cout << "short: " << ShortCast(2,1.2f,5.6,1) << endl;
}

void U4()
{
    char c;
    float a, b;
    cout << "Введите число: ";
    cin >> a;
    cout << "Введите действие (+, -, *, /): ";
    cin >> c;
    cout << "Введите число: ";
    cin >> b;
    switch (c) {
    case '+':
        cout << a << " + " << b << " = " << Sum(a,b) << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << Minus(a,b) << endl;
        break;
    case '*':
        cout << a << " x " << b << " = " << Prz(a,b) << endl;
        break;
    case '/':
        cout << a << " / " << b << " = " << Del(a,b) << endl;
        break;
    default:
        cout << "Такой команды не существует" << endl;
        break;
    }
}


int main()
{
    U1();
    cout << "--------------" << endl;
    U2();
    cout << "--------------" << endl;
    U3();
    cout << "--------------" << endl;
    U4();
    return 0;
}
