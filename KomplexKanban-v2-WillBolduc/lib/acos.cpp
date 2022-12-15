/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : acos
Author : Will
URL : NA
Description: Returns arccos of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"
Complex acos(const Complex complex){
  Complex complex1;
  double a = real(complex);
  double b = imag(complex);
  double A = (sqrt((1+a)*(1+a) + b*b) - sqrt((1-a)*(1-a) + b*b ))/2;
  double B = (sqrt((1+a)*(1+a) + b*b) + sqrt((1-a)*(1-a) + b*b ))/2;
  complex1.realval = acos(A);
  complex1.imagval = -1 * log(B + sqrt(B * B -1));
  return complex1;
}