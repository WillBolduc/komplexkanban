/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Imag
Author : Sammy
URL : NA
Description : Returns the imaginary value of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"

Complex polar(double mag, double ang = 0.0) {
  return Complex(cos(ang) * mag, sin(ang) * mag);
}

#include "../include/Complex.h"
double imag(const Complex complex){
  return complex.imagval;
}