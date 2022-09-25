﻿#include <iostream>
#include <cmath>


int main()
{
	setlocale(0, "");
	double S, n, P, m;
	std::cout << "Введите сумму займа,срок заема и процентную ставку\n";
	std::cin >> S;
	std::cin >> n;
	std::cin >> P;
	double r = P / 100;
	if (S < 0 || n < 0 || P < 0)
	{
		std::cout << "Введены отрицательные значения\n";
		return 0;
	}
	else
	{
		m = (S * r * std::pow(1 + r, P)) / (12 * (std::pow(1 + r, P) - 1));
		std::cout << "Месячная выплата " << m;
	}
}