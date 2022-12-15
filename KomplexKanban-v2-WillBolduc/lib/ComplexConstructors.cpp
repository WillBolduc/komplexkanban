/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexConstructors.cpp
Author : Sami
URL : NA
Description : Simple constructors, one default and one with parameters
Created : Nov. 28th
Modified : Nov. 30th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include "../include/Complex.h"
#include <cmath>

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex::Complex() {
  // Constructor code
  realval = 0.0;
  imagval = 0.0;
}

Complex::Complex(double re, double im) {
  realval = re;
  imagval = im;
}
// - - - - - Other Functions Follow - - - - - - - - - - - -
