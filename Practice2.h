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

class Candidate
{
private:
	std::string code, name, birth;
	float math, lite, eng;
public:
	Candidate();
	Candidate(std::string code, std::string name, std::string birthday, double math_score, double literature_score, double english_score);
	friend std::istream& operator >>(std::istream& dInput, Candidate& cdi0);
	friend std::ostream& operator <<(std::ostream& dOutput, Candidate cdi0);
	std::string getCode() const;
	std::string getName() const;
	std::string getBirthday() const;
	double getMathScore() const;
	double getLiteratureScore() const;
	double getEnglishScore() const;
};

class TestCandidate
{
private:
	int n;
	Candidate* cdi0;
public:
	TestCandidate(int n);
	~TestCandidate();
	void inputCandidates();
	void printGoodCandidates();
};

class c_Num
{
private:
	int re, vi; //số thực, số ảo
public:
	c_Num();
	friend std::istream& operator >>(std::istream& dInput, c_Num& n0);
	friend std::ostream& operator <<(std::ostream& dOutput, c_Num n0);
	c_Num(int, int);
	friend c_Num operator+(c_Num n1, c_Num n2);
	friend c_Num operator-(c_Num n1, c_Num n2);
	friend c_Num operator*(c_Num n1, c_Num n2);
	friend c_Num operator/(c_Num n1, c_Num n2);
};

class m_Table
{
private:
	int m, n;
public:
	m_Table();
	friend std::istream& operator >>(std::istream& dInput, m_Table& tab0);
	void print();
	void print(m_Table);
	void printT();
};