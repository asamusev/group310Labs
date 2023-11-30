#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int s,t,v1,v2,l;
    float v,a,r;
    cout << "Вычислить скорость прямолинейного движения:" << endl;
    cout << "Введите расстояние: ";
    cin >> s;
    cout << "Введите время: ";
    cin >> t;
    v = float(s)/t;
    cout << "Скорость = " << v << endl;

    cout << "Вычислить ускорение:" << endl;
    cout << "Введите начальную скорость: ";
    cin >> v1;
    cout << "Введите конечную скорость: ";
    cin >> v2;
    cout << "Введите время: ";
    cin >> t;
    a = float(v2-v1)/t;
    cout << "Ускорение = " << a << endl;

    cout << "Вычислить радиус окружности:" << endl;
    cout << "Введите длину окружности: ";
    cin >> l;
    float pi = 3.14f;
    r = float(l)/(2*pi);
    cout << "Радиус окружности = " << r << endl;
    return 0;
}
