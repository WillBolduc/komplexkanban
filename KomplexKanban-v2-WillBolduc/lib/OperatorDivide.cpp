/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Operator Divide
Author : Nate
URL : NA
Description : Overloads Division
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"

Complex Complex::operator/ (const Complex &other)  const {
  double a = realval;
  double b = imagval;
  double c = real(other);
  double d = imag(other);
  double newReal = ((a * c + b * d)/(c*c + d*d));
  double newImag = ((b * c - a * d)/(c*c + d*d));
  return Complex(newReal, newImag);
}
Complex Complex::operator/ (const double i) const {
  Complex other (i, 0);
  double a = realval;
  double b = imagval;
  double c = real(other);
  double d = imag(other);
  double newReal = ((a * c + b * d)/(c*c + d*d));
  double newImag = ((b * c - a * d)/(c*c + d*d));
  return Complex(newReal, newImag);
}
Complex operator/ (const double i, const Complex &other) {
  double a = i;
  double b = 0;
  double c = real(other);
  double d = imag(other);
  double newReal = ((a * c + b * d)/(c*c + d*d));
  double newImag = ((b * c - a * d)/(c*c + d*d));
  return Complex(newReal, newImag);
}