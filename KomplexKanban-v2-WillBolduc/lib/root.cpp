/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : root
Author : Will
URL : NA
Description: Returns the a'th root of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"
#define PI 3.1415926538979323846
Complex root(const Complex complex, double a){
  //Complex complex1;
  /*double real1 = real(complex);
  double imag1 = imag(complex);
  double r = sqrt(real1*real1 + imag1+imag1);
  double theta = atan(imag1 / real1);
  double alpha = theta / a;
  real1 = std::pow(r, 1/a) * std::cos(alpha);
  imag1 = std::pow(r, 1/a) * std::sin(alpha);
  return complex1;*/
  return pow(complex, 1.0/a);
}
