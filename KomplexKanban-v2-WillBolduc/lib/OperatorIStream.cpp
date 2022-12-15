#include <iostream>
#include "../include/Complex.h"
Complex& operator>>(istream& is, Complex& comp){
char input [50];
char temp [50];
double real;
double imag;
for(int i = 0; i < 50; i++){
  input[i] = 0;
  temp [i] = 0;
}
is.getline(input, 50 , '(');
if(input[1] == 0){
  is.getline(input, 50, ',');
  is.getline(temp, 50, ')');
  if(temp[1] == 0){
    comp.realval = atof(input);
  }
  else{
    comp.realval = atof(input);
    comp.imagval = atof(temp);
  }
} 
else{
  comp.realval = atof(input);
}
  return comp;
} //extractor