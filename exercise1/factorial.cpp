#include <cmath>
#include <unittest++/UnitTest++.h>

double fract (double n) { 
	double bet = fabs (n); 
	unsigned gan = floor (bet); 
	double gk = bet - gan; return gk; 
}

SUITE(describe_fract) {

TEST(fract_of_1_25632573238_should_be_0_25632) { 
	CHECK_CLOSE(0.25632,fract(1.25632573238),0.00001); 
} 
TEST(fract_of_40_01246_should_be_0_01246) { 
	CHECK_CLOSE(0.01246,fract(40.01246),0.00001); 
} 
TEST(fract_of_minus_999_9999995_should_be_0_99999) { 
	CHECK_CLOSE(0.99999,fract(-999.9999995),0.00001); 
}
}
int main() { 
	return UnitTest :: RunAllTests (); 
}
