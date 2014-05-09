#include <cmath>
#include <math.h>
#include <unittest++/UnitTest++.h>

double fract_funktion(double zahl) {
	int ganz;
	ganz = fract(zahl);
	return ganz;
}

SUITE(describe_fract_funktion)
{
	TEST(fract_of_12_should_be_3)
	{
		CHECK_CLOSE(12, fract_funktion((12.0123456));
	}
	TEST(fract_of_555_should_be_15)
	{
		CHECK_CLOSE(555, fract_funktion((555.54792));
	}
}
int main()
{
	return UnitTest::RunAllTests();
}