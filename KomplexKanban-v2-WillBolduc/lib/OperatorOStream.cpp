#include <iostream>
#include "../include/Complex.h"

ostream& operator<<(ostream& os, const Complex& c) {
  os << "(" << c.realval << ", " << c.imagval <<")";
  return os;
}