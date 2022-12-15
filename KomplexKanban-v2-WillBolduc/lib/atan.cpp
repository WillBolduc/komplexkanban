/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : atan
Author : Asa
URL : NA
Description : Finds the arctangent of a complex number given the complex number as input
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"
Complex atan(const Complex complex){
  Complex complex1;
  double a = real(complex);
  double b = imag(complex);
  complex1.realval = 0.5 * atan2((2 * a) , (1 - a*a - b*b));
  complex1.imagval = 0.25 * log((a*a + (1+b) * (1+b)) / ((a*a + (1-b) * (1-b))));
  return complex1;
}
