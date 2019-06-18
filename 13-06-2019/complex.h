#ifndef _COMPLEX_H
#define _COMPLEX_H 1

#include <iostream>
#include <string>

typedef float number;

class Complex
{
private:
  
  number a, b;
  
public:
  
  Complex(number i, number j);
  Complex(number j);
  Complex();
  Complex add(const Complex &n);
  Complex subtract(const Complex &n);
  Complex multiply(const Complex &n);
  Complex divide(const Complex &n);
  Complex operator+(const Complex &n);
  Complex operator-(const Complex &n);
  Complex operator*(const Complex &n);
  Complex operator/(const Complex &n);
  std::string toString();
};

#endif
