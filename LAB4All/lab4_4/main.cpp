#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x,y,z,v;
    bool logicValue;
    cout << "������ 1 �᫮: ";
    cin >> x;
    cout << "������ 2 �᫮: ";
    cin >> y;
    cout << "������ 3 �᫮: ";
    cin >> z;
    cout << "������ 4 �᫮: ";
    cin >> v;
    cout << x << " " << y << " " << z << " " << v << endl;
    x = 3 + 4 + 5;
    x = y = z;
    z *= ++y + 5;
    cout << x << " " << y << " " << z << " " << v << endl;
    logicValue = x || y && z || v;
    cout << logicValue << endl;
    // ��� logicValue = false �� ��६���� ������ ࠢ������ 0 ���� x,y,z = 0, ���� y,z,v = 0
}
