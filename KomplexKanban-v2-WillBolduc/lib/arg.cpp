/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : arg
Author : Will
URL : NA
Description: Returns the angle of a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"
double arg(const Complex complex){
  double real1 = real(complex);
  double imag1 = imag(complex);
  double angle = atan(imag1/real1);
  if(real1 < 0){
    angle += M_PI/2;
    if(imag1 < 0){
      angle +=M_PI/2;
    }
  }
  return angle;
}
