#include <cmath>
#include <unittest++/UnitTest++.h>

double volumen(unsigned radius, unsigned hoehe) {
	double v;
	v = M_PI*radius*radius*hoehe;
	return v; //Volumen
	
}
double oberflaeche(unsigned radius, unsigned hoehe) {
	double o;
	o = 2*M_PI*radius*(hoehe+radius);
	return o; //Oberflaeche
	
}

SUITE(describe_volumen)
{
	TEST(zylinder_radius2_hoehe10_v_40Pi)
	{
		CHECK_EQUAL(40*M_PI, volumen(2, 10));
	}
	TEST(zylinder_radius6_hoehe15_v_540Pi_o_252Pi)
	{
		CHECK_EQUAL(540*M_PI, volumen(6, 15));
	}
}
SUITE(describe_oberflaeche)
{
	TEST(zylinder_radius2_hoehe10_o_48Pi)
	{
		CHECK_EQUAL(48*M_PI, oberflaeche(2, 10));
	}
	TEST(zylinder_radius6_hoehe15_v_540Pi_o_252Pi)
	{
		CHECK_EQUAL(252*M_PI, oberflaeche(6, 15));
	}
}
int main()
{
	return UnitTest::RunAllTests();
}
