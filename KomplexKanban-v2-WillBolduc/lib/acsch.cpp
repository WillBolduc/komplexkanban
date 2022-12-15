#include "../include/Complex.h"
Complex acsch(const Complex z) {
  return asinh(1/z);
}