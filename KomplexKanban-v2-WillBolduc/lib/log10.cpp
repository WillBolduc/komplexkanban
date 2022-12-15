/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : log10
Author : Will
URL : NA
Description: Returns the log base 10 of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
Complex log10(const Complex complex){
  Complex complex1;
  complex1 = log(complex);
  complex1.realval = complex1.realval / log(10);
  complex1.imagval = complex1.imagval / log(10);
  return complex1;
}
