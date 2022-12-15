/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : asin
Author : Will
URL : NA
Description: Returns arcsin of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
Complex asin(const Complex complex){
  Complex complex1;
  double a = real(complex);
  double b = imag(complex);
  double A = (sqrt((1+a)*(1+a) + b*b) - sqrt((1-a)*(1-a) + b*b ))/2;
  double B = (sqrt((1+a)*(1+a) + b*b) + sqrt((1-a)*(1-a) + b*b ))/2;
  complex1.realval = asin(A);
  complex1.imagval = log(B + sqrt(B * B -1));
  return complex1;
}
