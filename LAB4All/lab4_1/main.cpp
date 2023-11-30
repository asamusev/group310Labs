#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << ((true && true) || false) << endl;
    cout << ((true && false) || true) << endl;
    cout << ((true && false) || false || true) << endl;
    cout << ((5 > 6 || 4 > 3) && (7 > 8)) << endl;
    cout << (!(7 > 6 || 3 > 4)) << endl;
}
