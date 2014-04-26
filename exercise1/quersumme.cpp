#include <cmath>
#include <unittest++/UnitTest++.h>

unsigned int quersumme(unsigned zahl) {
	int sum = 0;
	
	while ( zahl > 0 ) {
		sum += zahl % 10;
		zahl /= 10;
	}

	return sum;
}

SUITE(describe_quersumme)
{
	TEST(quersumme_of_12_should_be_3)
	{
		CHECK_EQUAL(3, quersumme(12));
	}
	TEST(quersumme_of_555_should_be_15)
	{
		CHECK_EQUAL(15, quersumme(555));
	}
}
int main()
{
	return UnitTest::RunAllTests();
}
