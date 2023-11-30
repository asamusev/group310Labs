#include <iostream>
#include <iomanip>

using namespace std;
int A = 5;
int main()
{
    int A = 2;
    cout << "Глобальная переменная A: " << ::A << endl;
    cout << "Локальная переменная A: " << A << endl;

    return 0;
}
