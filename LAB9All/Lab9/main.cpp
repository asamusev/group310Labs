#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
int main()
{
    struct AnimalKind
    {
        string headType;
        int legsCount;
        string bodyCover; //��᭠� �����, �ୠ� �����, ����  � �
        string tailType;
        string eyesType;
        int eyesCount;
    };

    AnimalKind newAnimal;

    cout << "������ ⨯ ������: ";
    cin >> newAnimal.headType;
    cout << "������ ���-�� ���: ";
    cin >> newAnimal.legsCount;
    cout << "������ ���஢ ⥫�: ";
    cin >> newAnimal.bodyCover;
    cout << "������ ⨯ 墮��: ";
    cin >> newAnimal.tailType;
    cout << "������ ⨯ ����: ";
    cin >> newAnimal.eyesType;
    cout << "������ ���-�� ����: ";
    cin >> newAnimal.eyesCount;

    cout << "��� ����⢮ ����� ������ \"" << newAnimal.headType << "\" � ���ண� ���-�� ���: "
         << newAnimal.legsCount << "\n� ����� ���஢ ⥫� \"" << newAnimal.bodyCover
         << "\" � ⨯�� 墮�� \"" << newAnimal.tailType << "\", ����� � ���� \"" << newAnimal.eyesType
         << "\", � �� ������⢮ " << newAnimal.eyesCount;

}
