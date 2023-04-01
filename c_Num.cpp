#include <iostream>
#include "Practice2.h"

c_Num::c_Num()
{
	this->re = 0;
	this->vi = 0;
}

std::istream& operator >>(std::istream& dInput, c_Num& n0)
{
	dInput >> n0.re >> n0.vi;
	return dInput;
}

std::ostream& operator <<(std::ostream& dOutput, c_Num n0)
{
	dOutput << "(" << n0.re << "," << n0.vi << ")" << std::endl;
	return dOutput;
}

c_Num::c_Num(int x, int y)
{
	this->re = x;
	this->vi = y;
}

c_Num operator+(c_Num n0, c_Num n2)
{
	c_Num res(n0.re + n2.re, n0.vi + n2.vi);
	return res;
}

c_Num operator-(c_Num n0, c_Num n2)
{
	c_Num res(n0.re - n2.re, n0.vi - n2.vi);
	return res;
}

c_Num operator*(c_Num n0, c_Num n2)
{
	c_Num res(n0.re * n2.re - n0.vi * n2.vi, n0.re * n2.vi + n0.vi * n2.re);
	return res;
}

c_Num operator/(c_Num n0, c_Num n2)
{
	c_Num res(((n0.re * n2.re + n0.vi * n2.vi) / (n2.re * n2.re + n2.vi * n2.vi)),
		((n2.re * n0.vi - n0.re * n2.vi) / (n2.re * n2.re + n2.vi * n2.vi)));
	return res;
}
