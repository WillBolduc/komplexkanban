#include "../include/Complex.h"
Complex asinh(const Complex z) {
  Complex i = Complex(0, 1);
  double absComponent = sqrt(abs(1-pow(z, 2)));
  Complex logArg = i*z + absComponent*exp(i/2.0 * arg(1-pow(z, 2)));
  return Complex(1,0)/i * log(logArg);
}
