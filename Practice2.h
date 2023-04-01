#pragma once
#include <iostream>
#include <string>

class Fraction
{
private:
	int num, den;
public:
	Fraction();
	Fraction(int, int);
	friend std::istream& operator >>(std::istream& dInput, Fraction& fract); //nhập phân số
	friend std::ostream& operator <<(std::ostream& dOutput, Fraction frac);
	friend Fraction operator+(Fraction fr1, Fraction fr2);
	friend Fraction operator+(int x, Fraction fr1);
	friend Fraction operator+(Fraction fr1, int x);
	friend Fraction operator-(Fraction fr1, Fraction fr2);
	friend Fraction operator-(int x, Fraction fr1);
	friend Fraction operator-(Fraction fr1, int x);
	friend Fraction operator*(Fraction fr1, Fraction fr2);
	friend Fraction operator*(int x, Fraction fr1);
	friend Fraction operator*(Fraction fr1, int x);
	friend Fraction operator/(Fraction fr1, Fraction fr2);
	friend Fraction operator/(int x, Fraction fr1);
	friend Fraction operator/(Fraction fr1, int x);
	Fraction min();
};

class Location
{
private:
	double x, y;
public:
	Location();
	Location(double x, double y);
	friend std::istream& operator >>(std::istream& dInput, Location& loc0);
	friend std::ostream& operator <<(std::ostream& dOutput, Location loc0);
	void move(Location loc0);
	bool chk(Location loc1, Location loc2);
	double dist(Location loc1, Location loc2);
	Location sym(Location loc0);
	double peri(Location loc1, Location loc2, Location loc3);
	double acre(Location loc1, Location loc2, Location loc3);
};