#include <cmath>
#include <unittest++/UnitTest++.h>

unsigned int checksum(unsigned zahl) {
	int sum = 0;
	
	while ( zahl > 0 ) {
		sum += zahl % 10;
		zahl /= 10;
	}

	return sum;
}

SUITE(describe_checksum)
{
	TEST(checksum_of_12_should_be_3)
	{
		CHECK_EQUAL(3, checksum(12));
	}
	TEST(checksum_of_555_should_be_15)
	{
		CHECK_EQUAL(15, checksum(555));
	}
}
int main()
{
	return UnitTest::RunAllTests();
}
