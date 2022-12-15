/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : log
Author : Will
URL : NA
Description: Returns the natural log of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
Complex log(const Complex complex){
  Complex complex1;
  complex1.realval = log(abs(complex));
  complex1.imagval = arg(complex);
  return complex1;
}
