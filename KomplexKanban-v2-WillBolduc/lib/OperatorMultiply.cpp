/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Operator Multiply
Author : Nate
URL : NA
Description : Overloads multiplication
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"

Complex Complex::operator* (const Complex &other) {
  double a = realval;
  double b = imagval;
  double c = real(other);
  double d = imag(other);
  return Complex(a * c - b * d, a * d + b * c);
}
Complex Complex::operator* (const double i) {
  Complex other(i, 0);
  double a = realval;
  double b = imagval;
  double c = real(other);
  double d = imag(other);
  return Complex(a * c - b * d, a * d + b * c);
}
Complex operator* (const double i, const Complex &other) {
  double a = i;
  double b = 0;
  double c = real(other);
  double d = imag(other);
  return Complex(a * c - b * d, a * d + b * c);
}
