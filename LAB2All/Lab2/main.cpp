#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    cout << "\n\n" << setw(10);
    cout << "*****" << setw(50) << setfill(' ');
    cout << "�����" << setw(50) << setfill(' ');
    cout << "*****" << endl;
    cout.setf(ios::right);
    cout << setw(100) << "�������: ���. ��ࠧ������" << endl;
    cout << setw(100) << "��㯯�: 310" << endl;
    cout << setw(100) << "��㤥�⪠: �.�. ����஢��" << endl;
    cout << setw(63) << "���� 2023" << endl;


    return 0;
}
