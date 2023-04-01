#include <iostream>
#include "Practice2.h"
using namespace std;

Location::Location()
{
	this->x = 0;
	y = 0;
}

Location::Location(double a, double b)
{
	this->x = a;
	this->y = b;
}

std::istream& operator >>(std::istream& dInput, Location& loc0)
{
	dInput >> loc0.x >> loc0.y;
	return dInput;
}

std::ostream& operator <<(std::ostream& dOutput, Location loc0)
{
	dOutput << "(" << loc0.x << "," << loc0.y << ")" << endl;
	return dOutput;
}

void Location::move(Location loc0)
{
	cin >> loc0;
}

bool Location::chk(Location loc1, Location loc2)
{
	if ((loc1.x == loc2.x) && (loc1.y == loc2.y)) return true;
	else return false;
}

double Location::dist(Location loc1, Location loc2)
{
	double dst, tmp;
	tmp = (loc2.x - loc1.x) * (loc2.x - loc1.x) + (loc2.y - loc1.y) * (loc2.y - loc1.y);
	dst = sqrt(abs(tmp));
	return dst;
}

Location Location::sym(Location loc0)
{
	Location loc;
	loc.x = -loc0.x;
	loc.y = -loc0.y;
	return loc;
}

double Location::peri(Location loc1, Location loc2, Location loc3)
{
	double pr;
	pr = dist(loc1, loc2) + dist(loc2, loc3) + dist(loc1, loc3);
	return pr;
}

double Location::acre(Location loc1, Location loc2, Location loc3)
{
	double io, acr, tmp;
	io = peri(loc1, loc2, loc3) / 2;
	tmp = io * (io - dist(loc1, loc2)) * (io - dist(loc2, loc3)) * (io - dist(loc1, loc3));
	acr = sqrt(abs(tmp));
	return acr;
}