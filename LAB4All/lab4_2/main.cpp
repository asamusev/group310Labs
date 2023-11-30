#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Через const" << endl;
    const bool a = true,b = false,c = true,d = false,e = true,f = false;

    cout << ((a && b) || (!d) && (c || e)) << endl;
    cout << ((b && c) || (a&&d) || (!e)) << endl;
    cout << ((f || e) && (a || d) && (b || c)) << endl;

    cout << "Через enum" << endl;
    enum Constants
    {
        a1 = 2,
        b1 = 4,
        c1 = 1,
        d1 = 5,
        e1 = 7,
        f1 = 3
    };

    cout << ((a1 > c1) && (b1 < d1) && (e1 != f1)) << endl;

    return 0;
}
