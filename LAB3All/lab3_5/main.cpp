#include <iostream>
#include <iomanip>

using namespace std;

void PrintChar(int a = 'a', char b = 'b', char c = 'c', char d = 'd') //
{
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
}

int main()
{
    cout << "Значения по умолчанию:" << endl;
    PrintChar();
    cout << "Присвоенные значения:" << endl;
    PrintChar(2,'b','s','1');

    return 0;
}
