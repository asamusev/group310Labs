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
    cout << "Название города: " << city.name << endl;
    cout << "Название региона: " << city.region << endl;
    cout << "Столица города: " << city.capital << endl;
    cout << "Страна города: " << city.country << endl;
    cout << "Континент города: " << city.continent << endl;
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
    cout << "Введите название города: ";
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
        cout << "Данная информация отсутствует" << endl;
        cout << "Вернуться к поиску?\nДа-q\tНет-e\n----";
        char button = getch();
        cout << '\n';
        if(button == 113)
            goto func;
    }
}


