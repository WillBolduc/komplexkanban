/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Operator Times Equals
Author : Nate
URL : NA
Description : Overloads *=
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"

Complex& Complex::operator *= (const Complex& other) {
  *this = *this * other;
  return *this;
}
Complex& Complex::operator *= (const double i) {
  *this = *this * Complex(i, 0);
  return *this;
}

