/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : conj
Author : Will
URL : NA
Description: Returns the conjugate of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"
Complex conj(const Complex complex){
  Complex complex1;
  double imag1 = imag(complex);
  complex1.imagval = -1 * imag1;
  return complex1;
}
