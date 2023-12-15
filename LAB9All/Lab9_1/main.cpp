#include <iostream>
#include <iomanip>

using namespace std;

struct Fraction
{
    int numerator;
    int denominator;
};

Fraction GetFraction()
{
    Fraction fract;
    cout << "������ �᫨⥫�: ";
    cin >> fract.numerator;
    cout << "������ �������⥫�: ";
    cin >> fract.denominator;
    cout << "--------------------" << endl;
    return fract;
}

double Multiply(Fraction first, Fraction second)
{
    double res;
    res = (double)((first.numerator * second.numerator) / (first.denominator * second.denominator));
    return res;

}

int main()
{
    Fraction first = GetFraction();
    Fraction second = GetFraction();
    double res = Multiply(first, second);
    cout << "������� ������� �஡� " << first.numerator << "/" << first.denominator <<
            " �� " << second.numerator << "/" << second.denominator << " = " << res << endl;
}
