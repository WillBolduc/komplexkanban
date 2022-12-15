/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : exp
Author : Will
URL : NA
Description: Returns the e to the power of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
Complex exp(const Complex complex){
  double e = 2.7182818284590452353602874713527;
  Complex *complex1 = new Complex();
  *complex1 = pow(e, complex);
  return *complex1;
}
