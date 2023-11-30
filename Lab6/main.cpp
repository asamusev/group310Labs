#include <iostream>
#include <iomanip>
#include <random>
#include <time.h>

using namespace std;

//��� 6-�� �������
int Factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * Factorial(n-1);
}


void Z1()
{
    string name, faculty, city, univer, group, year;

    cout << "������ ᢮� ���: ";
    cin >> name;
    cout << "������ ᢮� ��த: ";
    cin >> city;
    cout << "������ �������� 㭨������ ��� �� ���砥���: ";
    cin >> univer;
    cout << "������ �������� 䠪���� ��� �� ���砥���: ";
    cin >> faculty;
    cout << "������ ����� ��㯯� ��襣� ���祭��: ";
    cin >> group;
    cout << "������ ��� ����㯫����: ";
    cin >> year;


    cout << "\n\n" << setw(10);
    cout << "*****" << setw(50) << setfill(' ');
    cout << univer << setw(50) << setfill(' ');
    cout << "*****" << endl;
    cout.setf(ios::right);
    cout << setw(100) << "�������: " << faculty << endl;
    cout << setw(100) << "��㯯�: " << group << endl;
    cout << setw(100) << "��㤥�⪠: " << name << endl;
    cout << setw(60) << city << " 2023" << endl;
}

void Z2()
{
    random_device rd;
    mt19937_64 mt(rd());
    int min = 100000000000;
    int max = -1;
    int M[10];
    for(int i = 0; i < 10; i++)
    {
        M[i] = mt() % 100;
        if(M[i] < min)
            min = M[i];
        if(M[i] > max)
            max = M[i];
        cout << M[i] <<  " ";
    }
    cout << "\nMin: " << min << endl;
    cout << "Max: " << max << endl;
}

void Z3()
{
    int M[5][5];
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i == j)
                M[i][j] = 1;
            else
                M[i][j] = 0;
        }
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << "\n";
    }
}

void Z4()
{
    srand(time(NULL));
    int M[8][8];
    int S = 0;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            M[i][j] = rand() % 15 + 1;
            if(j >= i+1)
                S += M[i][j];
        }
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << M[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "�㬬� �ᥫ ��室����� \n��� ������� ���������: " << S << endl;
}

void Z5()
{
    string alp = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < alp.length(); i++)
    {
        cout << alp[i] << ": " << int(alp[i])-60 << endl;
    }
}

void Z6()
{
    int n;
    int f = 1;
    cout << "������ �᫮ ��� 䠪�ਠ��: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        f *= i;
    }
    cout << "����ਠ� �१ ४����: "<< Factorial(n) << endl;
    cout << "����ਠ� �१ �����: "<< f << endl;
}

void Z7()
{
    int n;
    cout << "������ �᫮ ��� ��᫥����⥫쭮�� ��������: ";
    cin >> n;
    int F[n];
    for(int i = 0; i < n; i++)
    {
        if(i+1 == 1 ||  i+1 == 2)
            F[i] = 1;
        else
            F[i] = F[i-1] + F[i-2];
    }

    for(int i = 0; i < n; i++)
    {
        cout << F[i] << " ";
    }
}

void Z8()
{
    int n = 10;
    for(int i = n-1; i >= 0; i--)
    {
        int s = 0;
        int spaces = (n-(n-i));
        for(int j = 0; j < spaces; j++)
        {
            cout << ' ';
        }
        for(int j = n-i; j > 0; j--)
        {
            s += j;
            cout << j << " ";
        }
        cout << " �㬬�: " << s << endl;
    }
}

void Z9()
{
    srand(time(NULL));
    int n = 10;
    cin >> n;
    int M[n];
    for(int i = 0; i < n; i++)
    {
        M[i] = rand() % 100 + 1;
    }
    //�������஢����
    cout << "�������஢���� ���ᨢ: \n";
    for(int i = 0; i < n; i++)
    {
        cout << M[i] << " ";
    }
    cout << '\n';
    //����쪮���
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(M[i] > M[j])
            {
                int tmp = M[i];
                M[i] = M[j];
                M[j] = tmp;
            }
        }
    }
    cout << "�����஢���� ���ᨢ: \n";
    for(int i = 0; i < n; i++)
    {
        cout << M[i] << " ";
    }
}



int main()
{
    Z1();
    cout << "--------------------" << endl;
    Z2();
    cout << "--------------------" << endl;
    Z3();
    cout << "--------------------" << endl;
    Z4();
    cout << "--------------------" << endl;
    Z5();
    cout << "--------------------" << endl;
    Z6();
    cout << "--------------------" << endl;
    Z7();
    cout << "--------------------" << endl;
    Z8();
}
