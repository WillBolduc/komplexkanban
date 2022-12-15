/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : round
Author : Will
URL : NA
Description: Rounds the components of a complex number to 2 decimal places
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
Complex Complex::rnd(int digits){
  Complex complex1;
  double realnum = round(realval * pow(10, digits)) / pow(10, digits);
  double imagnum = round(imagval * pow(10, digits)) / pow(10, digits);
  complex1.realval = realnum;
  complex1.imagval = imagnum;
  return complex1;
  }
