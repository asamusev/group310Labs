#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int s,t,v1,v2,l;
    float v,a,r;
    cout << "���᫨�� ᪮���� ��אַ��������� ��������:" << endl;
    cout << "������ ����ﭨ�: ";
    cin >> s;
    cout << "������ �६�: ";
    cin >> t;
    v = float(s)/t;
    cout << "������� = " << v << endl;

    cout << "���᫨�� �᪮७��:" << endl;
    cout << "������ ��砫��� ᪮����: ";
    cin >> v1;
    cout << "������ ������� ᪮����: ";
    cin >> v2;
    cout << "������ �६�: ";
    cin >> t;
    a = float(v2-v1)/t;
    cout << "�᪮७�� = " << a << endl;

    cout << "���᫨�� ࠤ��� ���㦭���:" << endl;
    cout << "������ ����� ���㦭���: ";
    cin >> l;
    float pi = 3.14f;
    r = float(l)/(2*pi);
    cout << "������ ���㦭��� = " << r << endl;
    return 0;
}
