#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>
#include <random>
#include <map>

using namespace std;

void Z1()
{
    enum Floors
    {
        Parking = 0,
        Hall = 1,
        Products = 2,
        AllSell = 3,
        FoodCourt = 4,
        Cinema = 5,
        Terrarium = 6,
        Dendrarium = 7
    };

    int floor;
    cout << "������ ����� �⠦�, ��� ����� ��� ��ࠢ����� 0-7: ";
    cin >> floor;
    switch (Floors(floor)) {
    case 0:
        cout << "���� ���������� �� ��મ���";
        break;
    case 1:
        cout << "���� ���������� �� 宫�";
        break;
    case 2:
        cout << "���� ���������� �� �த�⮢� �⠦";
        break;
    case 3:
        cout << "���� ���������� �� 宧��⢥��� �⠦";
        break;
    case 4:
        cout << "���� ���������� �� ������� �⠦";
        break;
    case 5:
        cout << "���� ���������� �� �⠦ ����⥠��";
        break;
    case 6:
        cout << "���� ���������� �� �����";
        break;
    case 7:
        cout << "���� ���������� �� �������";
        break;
    default:
        break;
    }
}


enum class Animals
{
    Pig = 1,
    Chicken = 2,
    Goat = 3,
    Cat = 4,
    Dog = 5
};

string GetAnimalName(Animals animal)
{
    switch (animal) {
    case Animals::Pig:
        return "������ �� ������ �����";
        break;
    case Animals::Chicken:
        return "���� �� ����� �";
        break;
    case Animals::Goat:
        return "���� �� ����� ����";
        break;
    case Animals::Cat:
        return "���񭮪 �� ����� ���";
        break;
    case Animals::Dog:
        return "����窠 �� ����� ��ਪ";
        break;
    default:
        return "������ ����⭮�� � ᯨ᪥ ���";
        break;
    }
}

void Z2()
{
    int animal;
    cin >> animal;
    cout << GetAnimalName(Animals(animal)) << endl;
}


void Z3()
{
    auto m = 300;
    float FX = 300.600006;
    char cht = 'z';

    cout << "�ᯮ�짮����� ������ &" << endl;
    cout << "���� m" << " = " << &m << endl;
    cout << "���� FX" << " = " << &FX << endl;
    cout << "���� cht" << " = " << &cht << endl;
    cout << "-------------------------\n" << endl;

    cout << "�ᯮ�짮����� ������ * � &" << endl;
    cout << "���祭�� �� ����� m" << " = " << *&m << endl;
    cout << "���祭�� �� ����� FX" << " = " << *&FX << endl;
    cout << "���祭�� �� ����� cht" << " = " << *&cht << endl;
    cout << "-------------------------\n" << endl;

    auto *M = &m;
    float *fx = &FX;
    char *C = &cht;
    cout << "�ᯮ�짮����� ⮫쪮 ��६����� 㪠��⥫�" << endl;
    cout << "���� m" << " = " << M << endl;
    cout << "���� FX" << " = " << fx << endl;
    cout << "���� cht" << " = " << C << endl;
    cout << "-------------------------\n" << endl;

    cout << "�ᯮ�짮����� ⮫쪮 ������ 㪠��⥫�" << endl;
    cout << "���� m" << " = " << *M << endl;
    cout << "���� FX" << " = " << *fx << endl;
    cout << "���� cht" << " = " << *C << endl;
}

void Z4()
{
    srand(time(NULL));
    int n;
    cout << "������ ���-�� �-�� ���ᨢ�: ";
    cin >> n;
    int M[n];

    for(int x = 0; x < n; x++)
    {
        M[x] = rand() % 10 + 1;
    }

    int *i = M;
    cout << "�뢮� ��� 㪠��⥫�: " << endl;
    for(int x = 0; x < n; x++)
    {
        cout << i++ << " ";
    }
    int *j = M;
    cout << '\n';
    cout << "�뢮� � 㪠��⥫��: " << endl;
    for(int x = 0; x < n; x++)
    {
        cout << *j++ << " ";
    }
    cout << '\n';
}

void Z5()
{
    string eng = "UVWN";
    string &e = eng;
    int count = 0;
    for(char c: e) {
        for(char c2: e) {
            for(char c3: e) {
                string word;
                word += c;
                word += c2;
                word += c3;
                if(c != c2 && c != c3 && c2 != c3)
                {
                    cout << c << c2 << c3 << endl;
                    count++;
                }
            }
        }
    }
    cout << "�ᥣ� ����⠭���� \n����� ᤥ����: " << count << endl;
}

//��� ������� 6.
void ANDORXOR(int a, int b)
{
    bool and1;
    bool or1;
    bool xor1;

    int and2;
    int or2;
    int xor2;

    and1 = a&&b;
    or1 = a||b;
    xor1 = a^b;

    and2 = a&&b;
    or2 = a||b;
    xor2 = a^b;

    cout << "�㫥�� १�����" << endl;
    cout << "a and b: " << and1 << endl;
    cout << "a or b: " << or1 << endl;
    cout << "a xor b: " << xor1 << endl;

    cout << "�᫮�� १�����" << endl;
    cout << "a and b: " << and2 << endl;
    cout << "a or b: " << or2 << endl;
    cout << "a xor b: " << xor2 << endl;
}

void Z6()
{
    ANDORXOR(0,5);
}

int main()
{

}
