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
        string bodyCover; //Красная шерсть, черная шерсть, чешуя  и тд
        string tailType;
        string eyesType;
        int eyesCount;
    };

    AnimalKind newAnimal;

    cout << "Введите тип головы: ";
    cin >> newAnimal.headType;
    cout << "Введите кол-во ног: ";
    cin >> newAnimal.legsCount;
    cout << "Введите покров тела: ";
    cin >> newAnimal.bodyCover;
    cout << "Введите тип хвоста: ";
    cin >> newAnimal.tailType;
    cout << "Введите тип глаз: ";
    cin >> newAnimal.eyesType;
    cout << "Введите кол-во глаз: ";
    cin >> newAnimal.eyesCount;

    cout << "Ваше существо имеет голову \"" << newAnimal.headType << "\" у которого кол-во ног: "
         << newAnimal.legsCount << "\nи имеет покров тела \"" << newAnimal.bodyCover
         << "\" с типом хвоста \"" << newAnimal.tailType << "\", глаза у него \"" << newAnimal.eyesType
         << "\", а их количество " << newAnimal.eyesCount;

}
