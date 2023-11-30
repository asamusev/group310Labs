#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    int a = 5;
    bool b = false;
    char c = 'a';
    long int l = 12;

    auto iValue = a;
    auto bValue = b;
    auto cValue = c;
    long int lValue = l;

    cout << sizeof(iValue) << endl;
    cout << sizeof(bValue) << endl;
    cout << sizeof(cValue) << endl;
    cout << sizeof(lValue) << endl;

    return 0;
}
