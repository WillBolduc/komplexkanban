/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexConstructors.cpp
Author : Will
URL : NA
Description : Changed Complex output to string
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
string toString(const Complex complex){
  stringstream  concat;
  concat << real(complex) << " + " << imag(complex) << "i";
  string output = concat.str();
  return output;
  }
