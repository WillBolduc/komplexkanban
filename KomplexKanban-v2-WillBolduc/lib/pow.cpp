/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : pow
Author : Sammy
URL : NA
Description: Returns a complex numner to the power of a double
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
#include <cmath>
#define PI 3.1415926538979323846;
#define EULER 2.71828182845904523536;

Complex pow (double b, const Complex exp) {
  Complex *result = new Complex(pow(b, real(exp))*cos(imag(exp)*log(b)), pow(b, real(exp))*sin(imag(exp)*log(b))); // based on Euler's formula
  return *result;
}

Complex pow (const Complex b, int exp) {
  if (exp == 0) { 
    Complex *result = new Complex(1, 0);
    return *result;
  }
  Complex result = Complex(real(b), imag(b));
  for (int i = 0; i<abs(exp)-1; i++) {
    result*=b;
  }
  if (exp<0) {
    Complex dividend = Complex(1, 0);
    return (dividend / result);
  }
  return result;
}

  Complex pow(const Complex b, double expo) {
    return exp(expo * log(b));
  }

  Complex pow(const Complex b, const Complex exp) {
    Complex *result = new Complex();
    Complex left = pow(pow(real(b), 2) + pow(imag(b), 2), exp / 2.0);
    // return *left*exp(new Complex(-1*imag(exp)*arg(exp), real(exp)*arg(exp)));
    *result =  left * pow(2.71828182845904523536, Complex(-1*imag(exp)*arg(b), real(exp)*arg(b)));
    return *result;
  }
