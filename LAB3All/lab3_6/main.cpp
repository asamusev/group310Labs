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

    cout << "������ short: " << Size(a) << " ����" << endl;
    cout << "������ int: " << Size(b) << " ����" << endl;
    cout << "������ float: " << Size(c) << " ����" << endl;

    return 0;
}
