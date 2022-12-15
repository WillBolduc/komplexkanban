/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Complex
Author : Nate
URL : NA
Description : The complex class for complex numbers, and the functions that can be used upon them
Created : 11/28/2022
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#ifndef COMPLASA_H
#define COMPLASA_H

#include <iostream>
#include <complex>
#include <string>
#include <sstream>
using namespace std;

class Complex {
    double realval;
    double imagval;
    
    public:
    Complex();
    Complex(double re, double im);

    //----------------------------------------- OPERATOR OVERLOADS -----------------------------------------------------

    /**
     * Returns the real part of comlpex number
     * @param com The complex number to find the real part of
     * @return complex.real
     * @author ___________
     */
    friend double real(Complex);
    /**
     * Returns the imaginary part of complex number
     * @param com The complex number to find the real part of
     * @return complex.imaginary
     * @author _________
     */
      friend double imag(Complex);
    Complex operator+ (const Complex &other);
    Complex operator+ (const double i);
    friend Complex operator+ (const double i, const Complex &other);
    Complex operator- (const Complex &other);
    Complex operator- (const double i);
    friend Complex operator- (const double i, const Complex &other);
    Complex operator* (const Complex &other);
    Complex operator* (const double i);
    friend Complex operator* (const double i, const Complex &other) ;
    Complex operator/ (const Complex &other) const;
    Complex operator/ (const double i) const;
    friend Complex operator/ (const double i, const Complex &other);
    
    Complex rnd(int i);
    
    bool operator== (const Complex &other) const;
    bool operator== (const double i) const;
    bool operator!= (const Complex &other) const;
    bool operator!= (const double i) const;
    Complex& operator+= (const Complex &other);
    Complex& operator+= (const double i);
    Complex& operator-= (const Complex &other);
    Complex& operator-= (const double i);
    Complex& operator*= (const Complex &other);
    Complex& operator*= (const double i);
    Complex& operator/= (const Complex &other);
    Complex& operator/= (const double i);
    
      //------------------------------------- ARITHMETIC LIBRARY FUNCTIONS -------------------------------------------

    /**
     * Returns the absolute value (sqrt(a^2+b^2)) of com
     * @param com the complex number to find the absolute value of
     * @return the absolute value of com
     * @author ____________
     */
    friend double abs(Complex);
    friend double real(const Complex);
    friend double imag(const Complex);
    friend double abs(const Complex);
    friend double arg(const Complex);
    friend Complex conj(const Complex);
    friend double norm(const Complex);
    //friend Complex polar(double, double);
    friend Complex exp(const Complex);
    friend Complex log(const Complex);
    friend Complex log10(const Complex);
    friend Complex sqrt(const Complex);
    friend Complex tanh(const Complex);
    friend Complex sinh(const Complex);
    friend Complex cosh(const Complex);
    friend Complex tan(const Complex);
    friend Complex sin(const Complex);
    friend Complex cos(const Complex);
    friend Complex atan(const Complex);
    friend Complex asin(const Complex);
    friend Complex acos(const Complex);
    friend Complex asec(const Complex);
    friend Complex rotate(const Complex, double);
    friend Complex pow(double, const Complex);
    friend Complex pow(const Complex, int);
    friend Complex pow(const Complex, double);
    friend Complex pow(const Complex, const Complex);
    friend string toString(const Complex);
    friend Complex fromString(string);
    //friend ostream& operator<<(ostream&, const Complex);
  //Not required but helps for cout
  //ex. Cout << Complex(1.0, 3.0); -> 1.0 + 3.0i
    friend ostream& operator<<(ostream& os, const Complex& c);
    friend Complex& operator>>(istream& is, Complex& c);
    

    //Unused Functions
    friend Complex acosh(const Complex);
    friend Complex asech(const Complex);
    friend Complex atanh(const Complex);
    friend Complex acoth(const Complex);
    friend Complex asinh(const Complex);
    friend Complex acsch(const Complex);
    friend Complex acsc(const Complex);
    friend Complex acot(const Complex);
    friend Complex root(const Complex, double);
}; // Complex class declaration
#endif
