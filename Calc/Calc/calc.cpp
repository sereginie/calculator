#include <iostream>
#include <cassert>
#include "calc.h"
#include <cmath>
#include <utility>

int Calculator::Sum(const int first_num, const int second_num)
{
	return first_num + second_num;
}

int Calculator::Sub(const int first_num, const int second_num)
{
	return first_num - second_num;
}

int Calculator::Mult(const int first_num, const int second_num)
{
	return first_num * second_num;
}

int Calculator::Div(const int first_num, const int second_num)
{
	if (second_num == 0)
	{
		std::cout << "error" << std::endl;
		return 0;
	}
	return int(first_num / second_num);
}

int Calculator::Expon(const int first_num, const int second_num)
{
	int temp_first = first_num;

	if (second_num < 0)
	{
		return 0;
	}

	if (second_num == 0)
	{
		return 1;
	}

	int start_temp_first = 1;
	for (int i = 0; i < second_num; i++)
	{
		start_temp_first *= temp_first;
	}
	return start_temp_first;
}

int Calculator::SignMatching(const int first_num, const int second_num)
{
	if (Mult(first_num, second_num) > 0)
	{
		return 1;
	}
	return 0;
}

int Calculator::GetNOD(const int first_num, const int second_num)
{
	int tmp_first = abs(first_num);
	int tmp_second = abs(second_num);
	while (tmp_first != tmp_second)
	{
		if (tmp_first > tmp_second)
		{
			int tmp = tmp_first;
			tmp_first = tmp_second;
			tmp_second = tmp;
		}
		tmp_second = tmp_second - tmp_first;
	}
	return tmp_first;
}

int Calculator::GetNOK(const int first_num, const int second_num)
{
	int tmp_first = abs(first_num);
	int tmp_second = abs(second_num);
	int max = tmp_second;
	for (int i = max; i > 0; i++)
	{
		if ((i % tmp_first == 0) && (i % tmp_second == 0))
		{
			return i;
		}
	}
}