// to implement function on a fraction class
#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

    int gcd(int a, int b)
    {
        int divisor = a < b ? a : b;
        int dividend = a < b ? b : a;

        int r;
        while ((r = dividend % divisor) > 0)
        {
            dividend = divisor;
            divisor = r;
        }
        return divisor;
    }

public:
    Fraction(int num, int den)
    {
        this->numerator = num;
        this->denominator = den;
    }

    void normalize()
    {
        int div = gcd(numerator, denominator);
        numerator /= div;
        denominator /= div;
    }

    void print() const
    {
        cout << numerator << "/" << denominator << endl;
    }

    Fraction operator++()
    {
        numerator = numerator + denominator;
        normalize();
        return *this;
    }
};

int main()
{
    Fraction f1(3, 4);
    f1.print();
    ++f1;
    f1.print();

    Fraction f2 = ++f1;
    f1.print();
    f2.print();
    return 0;
}