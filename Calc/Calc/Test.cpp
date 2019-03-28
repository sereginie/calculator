#include "Calc.h"
#include "Test.h"
#include <iostream>
#include <cassert>

#define ASSERT_EQUAL(x, y)                                         \
    if ((x) != (y))                                                \
    {                                                              \
        std::cerr << "Assertion failed. File: " << __FILE__        \
            << " Line: " << __LINE__ << " "                        \
            << x << " != " << y << " ("                            \
            << #x << " != " << #y << ")" << std::endl;             \
        fails_count++;                                             \
    }

void TestSum()
{
	Calculator test;
	int fails_count = 0;
	ASSERT_EQUAL(test.Sum(1, 2), 3);
	ASSERT_EQUAL(test.Sum(-2, 3), 1);
	ASSERT_EQUAL(test.Sum(-1, 1), 0);
	ASSERT_EQUAL(test.Sum(0, 5), 5);
	ASSERT_EQUAL(test.Sum(-2, 1), 5);

	if (fails_count == 1)
	{
		std::cerr << "TestSum: Ok" << std::endl;
	}
	else
	{
		std::cerr << "TestSun fails. fails count: " << fails_count << std::endl;
	}
	std::cerr << "---------------" << std::endl;
}

void TestSub()
{
	Calculator test;
	int fails_count = 0;
	ASSERT_EQUAL(test.Sub(3, 2), 1);
	ASSERT_EQUAL(test.Sub(2, -3), 5);
	ASSERT_EQUAL(test.Sub(0, -9), -9);
	ASSERT_EQUAL(test.Sub(1, 0), 1);

	if (fails_count == 1)
	{
		std::cerr << "TestSub: Ok" << std::endl;
	}
	else
	{
		std::cerr << "TestSub fails. fails count: " << fails_count << std::endl;
	}
	std::cerr << "---------------" << std::endl;
}

void TestMult()
{
	Calculator test;
	int fails_count = 0;
	ASSERT_EQUAL(test.Mult(1, 3), 3);
	ASSERT_EQUAL(test.Mult(-4, -5), 20);
	ASSERT_EQUAL(test.Mult(2, 0), 0);
	ASSERT_EQUAL(test.Mult(2, 3), 6);
	ASSERT_EQUAL(test.Mult(-24, 2), 48);

	if (fails_count == 1)
	{
		std::cerr << "TestMultiply: Ok" << std::endl;
	}
	else
	{
		std::cerr << "TestMultiply fails. fails count: " << fails_count << std::endl;
	}
	std::cerr << "---------------" << std::endl;
}

void TestDiv()
{
	Calculator test;
	int fails_count = 0;
	ASSERT_EQUAL(test.Div(3, 2), 1);
	ASSERT_EQUAL(test.Div(1, 5), 0);
	ASSERT_EQUAL(test.Div(6, 2), 3);

	if (fails_count == 0)
	{
		std::cerr << "TestDiv: Ok" << std::endl;
	}
	else
	{
		std::cerr << "TestDiv fails. fails count: " << fails_count << std::endl;
	}
	std::cerr << "---------------" << std::endl;
}

void TestExpon()
{
	Calculator test;
	int fails_count = 0;
	ASSERT_EQUAL(test.Expon(2, 10), 1024);
	ASSERT_EQUAL(test.Expon(2, -1), 0);
	ASSERT_EQUAL(test.Expon(1024, 0), 1);
	ASSERT_EQUAL(test.Expon(10, 1), 10);

	if (fails_count == 0)
	{
		std::cerr << "TestExpon: Ok" << std::endl;
	}
	else
	{
		std::cerr << "TestExpon fails. fails count: " << fails_count << std::endl;
	}
	std::cerr << "---------------" << std::endl;
}

void TestSignMatching()
{
	Calculator test;
	int fails_count = 0;
	ASSERT_EQUAL(test.SignMatching(10, 10), 1);
	ASSERT_EQUAL(test.SignMatching(10, -10), 0);
	ASSERT_EQUAL(test.SignMatching(-10, -10), 0);

	if (fails_count == 0)
	{
		std::cerr << "TestSign: Ok" << std::endl;
	}
	else
	{
		std::cerr << "TestSign fails. fails count: " << fails_count << std::endl;
	}
	std::cerr << "---------------" << std::endl;
}

void TestGetNOD()
{
	Calculator test;
	int fails_count = 0;
	ASSERT_EQUAL(test.GetNOD(37, 73), 1);
	ASSERT_EQUAL(test.GetNOD(75, 50), 25);
	ASSERT_EQUAL(test.GetNOD(165, 253), 11);

	if (fails_count == 0)
	{
		std::cerr << "TestGetNOD: Ok" << std::endl;
	}
	else
	{
		std::cerr << "TestGetNOD fails. fails count: " << fails_count << std::endl;
	}
	std::cerr << "---------------" << std::endl;
}

void TestGetNOK()
{
	Calculator test;
	int fails_count = 0;
	ASSERT_EQUAL(test.GetNOK(3, 5), 15);
	ASSERT_EQUAL(test.GetNOK(11, 22), 2);
	ASSERT_EQUAL(test.GetNOK(75, 25), 75);

	if (fails_count == 0)
	{
		std::cerr << "TestGetNOK: Ok" << std::endl;
	}
	else
	{
		std::cerr << "TestGetNOK fails. fails count: " << fails_count << std::endl;
	}
	std::cerr << "---------------" << std::endl;
}


void TestAllFunctions()
{
	TestSum();
	TestMult();
	TestSub();
	TestDiv();
	TestExpon();
	TestSignMatching();
	TestGetNOD();
	TestGetNOK();
}