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
    cout << "���祭�� �� 㬮�砭��:" << endl;
    PrintChar();
    cout << "��᢮���� ���祭��:" << endl;
    PrintChar(2,'b','s','1');

    return 0;
}
