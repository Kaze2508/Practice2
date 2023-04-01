#include <iostream>
#include "Practice2.h"

Fraction::Fraction()
{
    this->num = 1;
    this->den = 1;
}

Fraction::Fraction(int x, int y)
{
    this->num = x;
    this->den = y;
}

std::istream& operator >>(std::istream& dInput, Fraction& fract)
{
    dInput >> fract.num >> fract.den;
    return dInput;
}

std::ostream& operator <<(std::ostream& dOutput, Fraction frac)
{
    if (frac.den == 1) dOutput << frac.num;
    else dOutput << frac.num << "/" << frac.den;
    return dOutput;
}

int maxi(int m, int n)
{
    int _maxi = 0;
    m = abs(m);
    n = abs(n);
    if (m == 0 || n == 0) _maxi = m + n;
    else
    {
        while (m != n)
        {
            if (m > n) m -= n;
            else n -= m;
        }
        _maxi = m;
    }
    return _maxi;
}

Fraction operator+(Fraction fr1, Fraction fr2)
{
    fr1 = fr1.min();
    fr2 = fr2.min();
    Fraction res(fr1.num * fr2.den + fr1.den * fr2.num, fr1.den * fr2.den);
    res = res.min();
    return res;
}

Fraction operator+(int x, Fraction fr1)
{
    fr1 = fr1.min();
    Fraction res(fr1.num + fr1.den * x, fr1.den);
    res = res.min();
    return res;
}

Fraction operator+(Fraction fr1, int x)
{
    fr1 = fr1.min();
    Fraction res(fr1.num + fr1.den * x, fr1.den);
    res = res.min();
    return res;
}

Fraction operator-(Fraction fr1, Fraction fr2)
{
    fr1 = fr1.min();
    fr2 = fr2.min();
    Fraction res(fr1.num * fr2.den - fr1.den * fr2.num, fr1.den * fr2.den);
    res = res.min();
    return res;
}

Fraction operator-(int x, Fraction fr1)
{
    fr1 = fr1.min();
    Fraction res(fr1.den * x - fr1.num, fr1.den);
    res = res.min();
    return res;
}

Fraction operator-(Fraction fr1, int x)
{
    fr1 = fr1.min();
    Fraction res(fr1.num - fr1.den * x, fr1.den);
    res = res.min();
    return res;
}

Fraction operator*(Fraction fr1, Fraction fr2)
{
    fr1 = fr1.min();
    fr2 = fr2.min();
    Fraction res(fr1.num * fr2.num, fr1.den * fr2.den);
    res = res.min();
    return res;
}

Fraction operator*(int x, Fraction fr1)
{
    fr1 = fr1.min();
    Fraction res(fr1.num * x, fr1.den);
    res = res.min();
    return res;
}

Fraction operator*(Fraction fr1, int x)
{
    fr1 = fr1.min();
    Fraction res(fr1.num * x, fr1.den);
    res = res.min();
    return res;
}

Fraction operator/(Fraction fr1, Fraction fr2)
{
    fr1 = fr1.min();
    fr2 = fr2.min();
    Fraction res(fr1.num * fr2.den, fr1.den * fr2.num);
    res = res.min();
    return res;
}

Fraction operator/(int x, Fraction fr1)
{
    fr1 = fr1.min();
    Fraction res(fr1.den * x, fr1.num);
    res = res.min();
    return res;
}

Fraction operator/(Fraction fr1, int x)
{
    fr1 = fr1.min();
    Fraction res(fr1.num, fr1.den * x);
    res = res.min();
    return res;
}

Fraction Fraction::min()
{
    int tmp = maxi(num, den);
    return Fraction(num / tmp, den / tmp);
}