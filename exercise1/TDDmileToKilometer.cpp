#include <cmath>
#include <unittest++/UnitTest++.h>

unsigned int mileToKilometer(unsigned mile) {
	
	int umrechnung;
	int kilometer = 1609344; //in mile
	umrechnung = mile * kilometer;

	return umrechnung;
}

SUITE(describe_mileToKilometer)
{
	TEST(mileToKilometer_of_1_should_be_3)
	{
		CHECK_EQUAL(1609344, mileToKilometer(1));
	}
	TEST(mileToKilometer_of_5_should_be_8046720)
	{
		CHECK_EQUAL(8046720, mileToKilometer(5));
	}
}
int main()
{
	return UnitTest::RunAllTests();
}