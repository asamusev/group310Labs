#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

struct City {
    string name;
    string region;
    string capital;
    string country;
    string continent;
};

void PrintInfo(City city)
{
    cout << "�������� ��த�: " << city.name << endl;
    cout << "�������� ॣ����: " << city.region << endl;
    cout << "�⮫�� ��த�: " << city.capital << endl;
    cout << "��࠭� ��த�: " << city.country << endl;
    cout << "���⨭��� ��த�: " << city.continent << endl;
}

int main()
{
    City cities[] = {
        {"Bratsk", "Irkutskaya oblast", "Moscow", "Russia", "Eurasia"},
        {"Irkutsk", "Irkutskaya oblast", "Moscow", "Russia", "Eurasia"},
        {"Moscow", "Moskovskaya oblast", "Moscow", "Russia", "Eurasia"},
        {"Novosibirsk", "Novosibirskaya oblast", "Moscow", "Russia", "Eurasia"},
        {"London", "Europe", "London", "United Kingdom", "Europe"},
        {"Wales", "Europe", "London", "United Kingdom", "Europe"},
        {"Paris", "Europe", "Paris", "France", "Europe"},
        {"Rome", "Europe", "Rome", "Italy", "Europe"},
        {"Berlin", "Europe", "Berlin", "Germany", "Europe"},
        {"Ankara", "Europe", "Ankara", "Turkey", "Europe"},
    };
    string cityName;
    bool find = false;
    func :
    cout << "������ �������� ��த�: ";
    cin >> cityName;
    for (auto city : cities)
    {
        if (city.name == cityName)
        {
            find = true;
            PrintInfo(city);
        }
    }
    if(!find)
    {
        cout << "������ ���ଠ�� ���������" << endl;
        cout << "�������� � �����?\n��-q\t���-e\n----";
        char button = getch();
        cout << '\n';
        if(button == 113)
            goto func;
    }
}


