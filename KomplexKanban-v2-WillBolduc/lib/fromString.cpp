/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : From String
Author : Will
URL : NA
Description: Takes in a string and turns it into a complex number
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/
#include "../include/Complex.h"
Complex fromString(string input){
  stringstream  question;
  question << input;
  stringstream number;
  //getline(question, number, " ");
  //string output = concat.str();
  Complex output;
  output.realval = 0;
  output.imagval = 0;
  return output;
}
