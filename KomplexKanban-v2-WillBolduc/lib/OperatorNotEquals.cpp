/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Operator Not Equals
Author : Nate
URL : NA
Description : Overloads !=
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"

bool Complex::operator!= (const Complex &other) const {
  return !(realval == real(other) && imagval == real(other));
}
