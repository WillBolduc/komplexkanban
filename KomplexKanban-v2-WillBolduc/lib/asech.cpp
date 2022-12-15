#include "../include/Complex.h"
Complex asech(const Complex complex){
  return acosh(1 / complex);
}
