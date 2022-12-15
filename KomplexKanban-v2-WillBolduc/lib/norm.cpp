/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : norm
Author : Will
URL : NA
Description: Returns the norm of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
double norm(const Complex complex){
  double sum = real(complex) * real(complex);
  sum += imag(complex) * imag(complex);
  return sum;
 }
