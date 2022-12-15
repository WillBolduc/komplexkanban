/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexConstructors.cpp
Author : Will
URL : NA
Description : Returns square root of complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
Complex sqrt(const Complex complex){
  Complex complex1 = pow(complex, 0.5);
  return complex1;
  } 
