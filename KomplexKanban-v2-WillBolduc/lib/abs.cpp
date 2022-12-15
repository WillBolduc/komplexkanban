/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Abs
Author : Will
URL : NA
Description: Returns the absolute value of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"

#include "../include/Complex.h"
double abs(const Complex complex){
   double realval = real(complex);
   double imagval = imag(complex);
   double result = sqrt(realval * realval + imagval * imagval);
   return result;
}