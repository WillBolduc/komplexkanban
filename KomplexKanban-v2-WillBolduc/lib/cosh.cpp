/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : cosh
Author : Will
URL : NA
Description: Returns the hyperbolic cos of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
Complex cosh(const Complex complex){
  Complex complex1;
  complex1.realval = cosh(real(complex)) * cos(imag(complex));
  complex1.imagval = sinh(real(complex)) * sin(imag(complex));
  return complex1;
}
