/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Polar
Author : Will
URL : NA
Description: Returns the arccsc of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"
Complex acsc(const Complex complex){
  Complex complex1  = asin( 1 / complex);
  return complex1;
}
