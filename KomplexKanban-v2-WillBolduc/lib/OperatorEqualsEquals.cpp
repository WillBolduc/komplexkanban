/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Operator Equals Equals
Author : Nate
URL : NA
Description : Overloads ==
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"
bool Complex::operator== (const Complex &other) const {
  
  return ((abs(imagval - imag(other)) < 0.001) && (abs(realval 
- real(other)) < 0.001));
}
