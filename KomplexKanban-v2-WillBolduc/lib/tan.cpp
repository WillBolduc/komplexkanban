/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexConstructors.cpp
Author : Will
URL : NA
Description : Output the tangent of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
Complex tan(const Complex complex){
  Complex complex1;
  double real1 = real(complex);
  double imag1 = imag(complex);
  complex1.realval = (tan(real1) - tan(real1) * tanh(imag1) * tanh(imag1)) / (1 + tan(real1) * tan(real1) * tanh(imag1) * tanh(imag1));
  complex1.imagval = (tanh(imag1) + tan(real1) * tan(real1) * tanh(imag1)) / (1 + tan(real1) * tan(real1) * tanh(imag1) * tanh(imag1));
  return complex1;
}
