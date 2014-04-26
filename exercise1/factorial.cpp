#include <cmath>
#include <UnitTest++ .h>

unsigned factorial(unsigned n);

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