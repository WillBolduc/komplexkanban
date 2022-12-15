/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexConstructors.cpp
Author : Will
URL : NA
Description : Returns hyperbolic sine value of complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
Complex sinh(const Complex complex){
  Complex complex1;
  complex1.realval = sinh(real(complex)) * cos(imag(complex));
  complex1.imagval = cosh(real(complex)) * sin(imag(complex));
  return complex1;
}
