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

    void add(const Fraction &f)
    {
        int lcm = (this->denominator * f.denominator);
        int coF1 = lcm / denominator;
        int coF2 = lcm / f.denominator;
        denominator = lcm;
        numerator = coF1 * numerator + coF2 * f.numerator;
        normalize();
    }

    Fraction operator+(const Fraction &f) const // overloaded + operator
    {
        int lcm = (this->denominator * f.denominator);
        int coF1 = lcm / denominator;
        int coF2 = lcm / f.denominator;

        Fraction res(coF1 * numerator + coF2 * f.numerator, lcm);
        res.normalize();

        return res;
    }

    void multiply(const Fraction &f)
    {
        numerator *= f.numerator;
        denominator *= f.denominator;
        normalize();
    }

    Fraction operator*(const Fraction &f) const
    {
        Fraction res(this->numerator * f.numerator, this->denominator * f.denominator);
        res.normalize();
        return res;
    }

    bool operator==(const Fraction &f) const
    {
        if (numerator == f.numerator && denominator == f.denominator)
            return true;
        else
            return false;
    }
};

int main()
{
    Fraction f1(3, 9);
    f1.print();
    Fraction f2(4, 3);
    f2.print();

    Fraction f3 = f1 + f2;
    f3.print();

    Fraction f4 = f1 * f2;
    f4.print();

    cout << (f4 == Fraction(4, 9)) << endl;
    return 0;
}