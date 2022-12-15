/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Operator Divide Equals
Author : Nate
URL : NA
Description : Overloads /=
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"

Complex& Complex::operator/= (const Complex &other) {
  *this = *this / other;
  return *this;
}
Complex& Complex::operator/= (const double i) {
  Complex other(i, 0);
  *this = *this / other;
  return *this;
}