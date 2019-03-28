#pragma once

#include <iostream>
#include <vector>
#include <istream>
#include <ostream>



class Calculator
{
public:
	//Matrix(const size_t height, const size_t width);
	int Sum(const int first_num, const int second_num);
	int Sub(const int first_num, const int second_num);
	int Mult(const int first_num, const int second_num);
	int Div(const int first_num, const int second_num);
	int Expon(const int first_num, const int second_num);
	int SignMatching(const int first_num, const int second_num);
	int GetNOD(const int first_num, const int second_num);
	int GetNOK(const int first_num, const int second_num);

};