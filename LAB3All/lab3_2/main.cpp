#include <iostream>
#include <iomanip>

using namespace std;

char PrintSymbol(char c) //
{
    cout << "������ ᨬ���: " << c << endl;
}

int main()
{
    char symbol;

    cout << "������ ᨬ���: ";
    cin >> symbol; // ���� ���祭�� � ��६�����
    PrintSymbol(symbol); // �맮� �㭪樨

    return 0;
}
