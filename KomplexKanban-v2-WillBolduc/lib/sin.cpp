/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexConstructors.cpp
Author : Will
URL : NA
Description : Returns sine of complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
Complex sin(const Complex complex){
  Complex complex1;
  double real1 = real(complex);
  double imag1 = imag(complex);
  complex1.realval = sin(real1) * cosh(imag1);
  complex1.imagval = cos(real1) * sinh(imag1);
  return complex1;
}
