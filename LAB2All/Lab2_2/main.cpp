#include <iostream>

using namespace std;
int main()
{
    cout << "bool = "  << sizeof(bool)  << " ����" << endl;
    cout << "char = "  << sizeof(char)  << " ����" << endl;
    cout << "short = " << sizeof(short) << " ����" << endl;
    cout << "int = "   << sizeof(int)   << " ����" << endl;
    cout << "float = " << sizeof(float) << " ����" << endl;

    cout << '\n';

    cout << "short int = "     << sizeof(short int)     << " ����" << endl;
    cout << "wchar_t = "       << sizeof(wchar_t)       << " ����" << endl;
    cout << "char16_t = "      << sizeof(char16_t)      << " ����" << endl;
    cout << "char32_t = "      << sizeof(char32_t)      << " ����" << endl;
    cout << "long long int = " << sizeof(long long int) << " ����" << endl;
    cout << "long double = "   << sizeof(long double)   << " ����" << endl;

   return 0;
}
