#include "../include/Complex.h"
Complex acoth(const Complex complex){
  Complex complex1;
  complex1 = atanh( 1 / complex);
  return complex1;
}