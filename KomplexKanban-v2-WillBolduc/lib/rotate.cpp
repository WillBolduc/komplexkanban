/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : rotate
Author : Will
URL : NA
Description: Returns a complex number rotated by an inputted radian
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
Complex rotate(const Complex complex, const double rads){
  Complex complex1;
  complex1.realval = cos(rads);
  complex1.imagval = sin(rads);
  return complex1 * complex;
  }
