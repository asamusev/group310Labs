#include <iostream>
#include <iomanip>

using namespace std;

double Cube(double a) // �㭪�� �����頥��� �� �᫠
{
    double c = a*a*a;
    return c; // �����饭�� ���祭�� ��६�����
}

int main()
{
    double num, c;

    cout << "������ �᫮: ";
    cin >> num; // ���� ���祭��
    c = Cube(num); // ��᢮���� ���祭�� �����頥��� �㭪樨
    cout << "�� �᫠ " << num << " ࠢ�� " << c << endl; // �뢮� �⢥�

    return 0;
}
