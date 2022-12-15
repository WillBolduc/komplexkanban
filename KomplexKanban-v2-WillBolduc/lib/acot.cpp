/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : acot
Author : Will
URL : NA
Description: Returns the arccot of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"
Complex acot(const Complex complex){
  Complex complex1 (0, 1);
  Complex complex2 = (complex1 / 2) * log((complex1 + complex) / (complex1 - complex));
  return complex1;
}