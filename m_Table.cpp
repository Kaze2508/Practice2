#include <iostream>
#include "Practice2.h"

m_Table::m_Table()
{
	this->m = this->n = 2;
}

std::istream& operator >>(std::istream& dInput, m_Table& tab0)
{
	dInput >> tab0.m >> tab0.n;
	return dInput;
}

void m_Table::print()
{
	for (int i = 1; i <= 10; i++)
		std::cout << m << " * " << i << " = " << i * m << std::endl;
}

void m_Table::print(m_Table tab0)
{
	for (int i = m; i <= n; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			std::cout << i << " * " << j << " = " << i * j;
			//if (i * j < 10) std::cout << " ";
			std::cout << "  ";
		}
		std::cout << std::endl;
	}
}

void m_Table::printT()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 2; j <= 9; j++)
		{
			if (i < 10) std::cout << j << " * " << i << " = " << i * j;
			else if (i == 10) std::cout << j << " * " << i << "= " << i * j;
			if (i * j < 10) std::cout << "  ";
			std::cout << "  ";
		}
		std::cout << std::endl;
	}
}