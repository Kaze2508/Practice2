#include <iostream>
#include "Practice2.h"

TestCandidate::TestCandidate(int n) 
{
    this->n = n;
    this->cdi0 = new Candidate[n];
}

TestCandidate::~TestCandidate() 
{
    delete[] this->cdi0;
}

void TestCandidate::inputCandidates() 
{
    std::string code, name, birthday;
    double math_score, literature_score, english_score;
    for (int i = 0; i < this->n; i++) 
    {
        std::cout << "Enter information for candidate " << i + 1 << ":\n";
        std::cout << "Code: ";
        std::cin >> code;
        std::cout << "Name: ";
        std::cin.ignore();
        std::getline(std::cin, name);
        std::cout << "Birthday: ";
        std::cin >> birthday;
        std::cout << "Math score: ";
        std::cin >> math_score;
        std::cout << "Literature score: ";
        std::cin >> literature_score;
        std::cout << "English score: ";
        std::cin >> english_score;
        this->cdi0[i] = Candidate(code, name, birthday, math_score, literature_score, english_score);
    }
}

void TestCandidate::printGoodCandidates() 
{
    std::cout << "Candidates with total score more than 15:"<<std::endl;
    for (int i = 0; i < this->n; i++) 
    {
        double total_score = this->cdi0[i].getMathScore() + this->cdi0[i].getLiteratureScore() + this->cdi0[i].getEnglishScore();
        if (total_score > 15) 
        {
            std::cout << "Code: " << this->cdi0[i].getCode() << "\n";
            std::cout << "Name: " << this->cdi0[i].getName() << "\n";
            std::cout << "Birthday: " << this->cdi0[i].getBirthday() << "\n";
            std::cout << "Math score: " << this->cdi0[i].getMathScore() << "\n";
            std::cout << "Literature score: " << this->cdi0[i].getLiteratureScore() << "\n";
            std::cout << "English score: " << this->cdi0[i].getEnglishScore() << "\n";
            std::cout << "Total score: " << total_score << "\n\n";
        }
    }
}