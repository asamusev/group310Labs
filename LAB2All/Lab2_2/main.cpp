#include <iostream>

using namespace std;
int main()
{
    cout << "bool = "  << sizeof(bool)  << " Байт" << endl;
    cout << "char = "  << sizeof(char)  << " Байт" << endl;
    cout << "short = " << sizeof(short) << " Байт" << endl;
    cout << "int = "   << sizeof(int)   << " Байт" << endl;
    cout << "float = " << sizeof(float) << " Байт" << endl;

    cout << '\n';

    cout << "short int = "     << sizeof(short int)     << " Байт" << endl;
    cout << "wchar_t = "       << sizeof(wchar_t)       << " Байт" << endl;
    cout << "char16_t = "      << sizeof(char16_t)      << " Байт" << endl;
    cout << "char32_t = "      << sizeof(char32_t)      << " Байт" << endl;
    cout << "long long int = " << sizeof(long long int) << " Байт" << endl;
    cout << "long double = "   << sizeof(long double)   << " Байт" << endl;

   return 0;
}
