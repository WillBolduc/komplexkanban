/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Operator Plus Equals
Author : Nate
URL : NA
Description : Overloads +=
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"

Complex& Complex::operator+= (const Complex &other) {
  *this = *this + other;
  return *this;
}
Complex& Complex::operator+= (const double other) {
  *this = *this + other;
  return *this;
}


