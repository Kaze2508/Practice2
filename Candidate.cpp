#include <iostream>
#include "Practice2.h"

std::string code, name, birth;
float math, lite, eng;

Candidate::Candidate()
{
	code = ' ';
	name = ' ';
	birth = ' ';
	math = lite = eng = 0.0f;
}

Candidate::Candidate(std::string code, std::string name, std::string birthday, double math_score, double literature_score, double english_score) 
{
	this->code = code;
	this->name = name;
	this->birth = birthday;
	this->math = math_score;
	this->lite = literature_score;
	this->eng = english_score;
}

std::istream& operator >>(std::istream& dInput, Candidate& cdi0)
{
	dInput >> cdi0.code >> cdi0.name >> cdi0.birth;
	dInput >> cdi0.math >> cdi0.lite >> cdi0.eng;
	return dInput;
}

std::ostream& operator <<(std::ostream& dOutput, Candidate cdi0)
{
	dOutput << cdi0.code << std::endl;
	dOutput << cdi0.name << std::endl;
	dOutput << cdi0.birth << std::endl;
	dOutput << cdi0.math << std::endl;
	dOutput << cdi0.lite << std::endl;
	dOutput << cdi0.eng << std::endl;
	return dOutput;
}

std::string Candidate::getCode() const 
{
	return this->code;
}

std::string Candidate::getName() const 
{
	return this->name;
}

std::string Candidate::getBirthday() const 
{
	return this->birth;
}

double Candidate::getMathScore() const 
{
	return this->math;
}

double Candidate::getLiteratureScore() const 
{
	return this->lite;
}

double Candidate::getEnglishScore() const 
{
	return this->eng;
}