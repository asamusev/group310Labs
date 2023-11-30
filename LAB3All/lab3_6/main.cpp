#include <iostream>
#include <iomanip>

using namespace std;


short Size(short a)
{
    return sizeof(a);
}
int Size(int a)
{
    return sizeof(a);
}
float Size(float a)
{
    return sizeof(a);
}

int main()
{
    short a = 2;
    int b = 2;
    float c = 2;

    cout << "Размер short: " << Size(a) << " Байт" << endl;
    cout << "Размер int: " << Size(b) << " Байт" << endl;
    cout << "Размер float: " << Size(c) << " Байт" << endl;

    return 0;
}
