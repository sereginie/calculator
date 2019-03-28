#include <iostream>
#include <cassert>
#include "Calc.h"
#include "Test.h"
#include <cmath>
#include <utility>

enum function { Sum_, Sub_, Mult_, Div_, Expon_, SignMatching_, GetNOD_, GetNOK_ };
    
int main()
{
	Calculator counter;
	TestAllFunctions();
	int first_num = 0;
	int second_num = 0;
	int case_number = 0;
	std::cout << "It's a calculator " << std::endl;
	std::cout << "Your first number: " << std::endl;
	std::cin >> first_num;
	std::cout << " Your second number : " << std::endl;
	std::cin >> second_num;


	std::cout << " What do you want to do? " << std::endl;
	std::cout << "Input 0 to Sum" << std::endl;
	std::cout << "Input 1 to Sub" << std::endl;
	std::cout << "Input 2 to Mult" << std::endl;
	std::cout << "Input 3 to Div" << std::endl;
	std::cout << "Input 4 to Expon" << std::endl;
	std::cout << "Input 5 to SignMatching" << std::endl;
	std::cout << "Input 6 to GetGCD" << std::endl;
	std::cout << "Input 7 to GetLCM" << std::endl;
	std::cin >> case_number;

	switch (case_number)
	{
	case Sum_:
	{
		std::cout << counter.Sum(first_num, second_num) << std::endl;
		break;
	}

	case Sub_:
	{
		std::cout << counter.Sub(first_num, second_num) << std::endl;
		break;
	}

	case Mult_:
	{
		std::cout << counter.Mult(first_num, second_num) << std::endl;
		break;
	}
	case Div_:
	{
		std::cout << counter.Div(first_num, second_num) << std::endl;
		break;
	}

	case Expon_:
	{
		std::cout << counter.Expon(first_num, second_num) << std::endl;
		break;
	}

	case SignMatching_:
	{
		std::cout << counter.SignMatching(first_num, second_num) << std::endl;
		break;
	}

	case GetNOD_:
	{
		std::cout << counter.GetNOD(first_num, second_num) << std::endl;
		break;
	}

	case GetNOK_:
	{
		std::cout << counter.GetNOK(first_num, second_num) << std::endl;
		break;
	}

	default:
	{
		std::cout << "Input a number from 0 to 7" << std::endl;
		break;
	}
	}
	return 0;
}