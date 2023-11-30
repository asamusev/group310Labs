#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    bool a = true, b = false;

    if(!(a && b) == ((!a)||(!b)))
        cout << "1 закон справедлив" << endl;
    if(!(a || b) == ((!a)&&(!b)))
        cout << "2 закон справедлив" << endl;
    return 0;
}
