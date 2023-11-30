#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    cout << "\n\n" << setw(10);
    cout << "*****" << setw(50) << setfill(' ');
    cout << "ТУСУР" << setw(50) << setfill(' ');
    cout << "*****" << endl;
    cout.setf(ios::right);
    cout << setw(100) << "Факультет: Доп. Образование" << endl;
    cout << setw(100) << "Группа: 310" << endl;
    cout << setw(100) << "Студентка: Д.О. Федорович" << endl;
    cout << setw(63) << "Братск 2023" << endl;


    return 0;
}
