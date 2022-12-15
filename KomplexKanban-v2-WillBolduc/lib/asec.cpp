/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : asec
Author : Will
URL : NA
Description: Returns arcsec of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"
Complex asec(const Complex complex){
  Complex complex1  = acos( 1 / complex);
  return complex1;
}
