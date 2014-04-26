#include <cmath>
#include <unittest++/UnitTest++.h>

unsigned int factorial(unsigned zahl) {
	if (zahl <= 1) {
		return 1;
	}
	return factorial(zahl - 1) * zahl;
}

SUITE(describe_factorial)
{
	TEST(factorial_of_zero_should_be_1)
	{
		CHECK_EQUAL(1, factorial(0));
	}
	TEST(factorial_of_should_be_24)
	{
		CHECK_EQUAL(24, factorial(4));
	}
}
int main()
{
	return UnitTest::RunAllTests();
}
