/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexConstructors.cpp
Author : Will
URL : NA
Description : not implemented
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
Complex tanh(const Complex complex){
  Complex complex1;
  double real1 = real(complex);
  double imag1 = imag(complex);
  complex1.realval = (tanh(real1) + tanh(real1) * tan(imag1)*tan(imag1) ) / (1 + tanh(real1) * tanh(real1) * tan(imag1) * tan(imag1));
  complex1.imagval = (tan(imag1) - tanh(real1) * tanh(real1) * tan(imag1)) / (1 + tanh(real1) * tanh(real1) * tan(imag1) * tan(imag1));
  return complex1;
}
