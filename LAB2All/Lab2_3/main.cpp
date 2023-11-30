#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int a,b,c;
    cout << "Введите 1 число: ";
    cin >> a;
    cout << "Введите 2 число: ";
    cin >> b;
    cout << "Введите 3 число: ";
    cin >> c;
    cout << '\n';
    float sr;
    sr = float(a+b+c)/3;
    cout << "Среднее арифметическое чисел = " << sr << endl;
    return 0;
}
