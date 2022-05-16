// program to use class to implement a Fraction
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

    // adding getters and setters
    void setNumerator(int num)
    {
        numerator = num;
    }

    void setDenominator(int den)
    {
        denominator = den;
    }

    int getNumerator() const
    {
        return numerator;
    }

    int getDenominator() const
    {
        return denominator;
    }

    void normalize()
    {
        int div = gcd(numerator, denominator);
        numerator /= div;
        denominator /= div;
    }

    void print()
    {
        cout << numerator << "/" << denominator << endl;
    }

    void add(const Fraction &f)
    {
        int lcm = (this->denominator * f.denominator);
        int coF1 = lcm / denominator;
        int coF2 = lcm / f.denominator;
        denominator = lcm;
        numerator = coF1 * numerator + coF2 * f.numerator;
        normalize();
    }

    void multiply(const Fraction &f)
    {
        numerator *= f.numerator;
        denominator *= f.denominator;
        normalize();
    }
};

int main()
{
    Fraction f1(4, 5);
    f1.print();
    Fraction f2(3, 6);
    f1.add(f2);
    f1.print();
    f1.multiply(f2);
    f1.print();

    Fraction const f3(2, 3);
    cout << f3.getNumerator() << "/" << f3.getDenominator() << endl;
    return 0;
}