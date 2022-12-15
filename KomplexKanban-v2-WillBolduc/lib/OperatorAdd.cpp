/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Operator Add
Author : Nate
URL : NA
Description : Overloads Addition
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"

Complex Complex::operator+ (const Complex &other) {
  return Complex(realval + real(other), imagval + imag(other));
}
Complex Complex::operator+ (const double other) {
  return Complex(realval + other, imagval);
}
Complex operator+(const double initial, const Complex &other){
  return Complex(real(other) + initial, imag(other));
}
