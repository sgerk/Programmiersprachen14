#include <cmath>
#include <unittest++/UnitTest++.h>

bool is_prime(unsigned zahl)
{
  if (zahl > 1) // 1 ist keine Primzahl!
  {
    for (unsigned i = 2; i < zahl; ++i) // von 2 bis (Wert-1)
      if (zahl% i == 0) // Muss immer ein Rest bleiben
        return false;
    return true; // Dann ist es eine Primzahl
  }
  return false;
}

SUITE(describe_is_prime)
{
	TEST(is_prime_of_2_should_be_true)
	{
		CHECK_EQUAL(true, is_prime(2));
	}
	TEST(is_prime_of_3_should_be_true)
	{
		CHECK_EQUAL(true, is_prime(3));
	}
	TEST(is_prime_of_6_should_be_false)
	{
		CHECK_EQUAL(false, is_prime(6));
	}
}
int main()
{
	return UnitTest::RunAllTests();
}
