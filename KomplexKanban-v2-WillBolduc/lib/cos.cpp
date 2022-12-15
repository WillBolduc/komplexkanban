/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : cos
Author : Nate
URL : NA
Description: Returns the cos of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
Complex cos(const Complex complex){
  Complex complex1;
  double real1 = real(complex);
  double imag1 = imag(complex);
  complex1.realval = cos(real1) * cosh(imag1);
  complex1.imagval = sin(real1) * sinh(imag1)*-1;
  return complex1;
}
