/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Runn with ./a.out

*/


//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "catch_amalgamated.hpp"
#include "../include/Complex.h"
using namespace std;

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN

int main( int argc, char* argv[] ) {
  // global setup...

  int result = Catch::Session().run( argc, argv );

  // global clean-up...
    cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else    //Not CATCH_AMALGAMATED_CUSTOM_MAIN

TEST_CASE("Test", "Tests")
{
  cout << "Test for test in test";
  REQUIRE(1 == 1);
}
//TEST_CASE(<TEST_NAME>, <TEST_CATEGORY>)
TEST_CASE("Operator Overloading", "Operators")
{
  Complex c1(1.0, 0.0);
  Complex c2(1.0, 0.0);
  Complex c3(4.0, 3.0);
  Complex c4(2.0, 1.0);
  Complex c5(1.0, 3.0);
  Complex c6(-5.0, 3.0);
  
  REQUIRE(c1 == c2);
  CHECK(c3 + c5 == Complex(5, 6));
  CHECK(c3 - c5 == Complex(3, 0));
  CHECK(c1 * c4 == c4);
  Complex cMult = Complex(3.7, -9.6) * Complex(-5.0, 7.8);
  CHECK(cMult == Complex(56.38, 76.86));
  CHECK(Complex(0, 1) * Complex(0, 1) == Complex(-1, 0));
  CHECK(c3 / c5 == Complex(1.3, -0.9));
  CHECK((c1 += c3) == Complex(5, 3));
  Complex cMult2(4, 7);
  cMult2 *= Complex(3, 8);
  CHECK(cMult2 == Complex(-44, 53));
  CHECK(c1 != c2);
  CHECK((c6 -= c4) == Complex(-7, 2));
  CHECK((c5 /= c4) == Complex(1, 1));
}
TEST_CASE("Trigonometric Functions", "Trig")
{
  CHECK(acos(Complex(5, 7)) == Complex(0.9537, -2.8463));
  CHECK(asin(Complex(5, 7)) == Complex(0.6171, 2.8463));
  CHECK(atan(Complex(5, 7)) == Complex(1.5027, 0.0944));
  CHECK(cos(Complex(5, 7)) == Complex(155.5368, 525.7936));
  CHECK(cosh(Complex(5, 7)) == Complex(55.9470, 48.7505));
  CHECK(exp(Complex(5, 7)) == Complex(111.8890, 97.5055));
  CHECK(log(Complex(5, 7)) == Complex(2.1520, 0.9505));
  CHECK(log10(Complex(5, 7)) == Complex(0.9346, 0.4128));
  CHECK(pow(Complex(5, 7), 3) == Complex(-610, 182));
  CHECK(pow(Complex(5, 7), .3) == Complex(1.8301, 0.5365));
  CHECK(sin(Complex(5, 7)) == Complex(-525.7945, 155.5365));
  CHECK(sinh(Complex(5, 7)) == Complex(55.9419, 48.7549));
  CHECK(sqrt(Complex(5, 7)) == Complex(2.6079, 1.3420));
  CHECK(tan(Complex(2, 3)) == Complex(-.0037, 1.0032));
  // mCHECK(tanh(Complex(5, 7)) == Complex(0.9999, 0.0001));
  // CHECK(acosh(Complex(5,7)) == Complex(2.8462, 0.9537));
  // CHECK(acoth(Complex(5,7)) == Complex(0.0670, -0.0947));
  // CHECK(acsch(Complex(5,7)) == Complex(0.0678, -0.0945));
  // CHECK(asech(Complex(5,7)) == Complex(0.0946, -1.5034));
  // CHECK(asinh(Complex(5,7)) == Complex(2.8440, 0.9473));
  // CHECK(atanh(Complex(5,7)) == Complex(0.0670, 1.4760));

}
// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN
