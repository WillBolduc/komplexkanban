#include "../include/Complex.h"
Complex atanh(const Complex complex){
  Complex complex1;
  complex1 = log((1 + complex) / (1-complex)) * 0.5;
  return complex1;
}