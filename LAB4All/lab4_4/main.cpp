#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x,y,z,v;
    bool logicValue;
    cout << "Введите 1 число: ";
    cin >> x;
    cout << "Введите 2 число: ";
    cin >> y;
    cout << "Введите 3 число: ";
    cin >> z;
    cout << "Введите 4 число: ";
    cin >> v;
    cout << x << " " << y << " " << z << " " << v << endl;
    x = 3 + 4 + 5;
    x = y = z;
    z *= ++y + 5;
    cout << x << " " << y << " " << z << " " << v << endl;
    logicValue = x || y && z || v;
    cout << logicValue << endl;
    // Для logicValue = false все переменные должны равняться 0 либо x,y,z = 0, либо y,z,v = 0
}
