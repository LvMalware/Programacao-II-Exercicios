#include <iostream>
#include "complex.h"

using namespace std;

Complex::Complex(number i, number j)
{
  a = i;
  b = j;
}
Complex::Complex(number j)
{
  a = 0;
  b = j;
}
Complex::Complex()
{
  a = 0;
  b = 0;
}

Complex
Complex::add(const Complex &n)
{
  a += n.a;
  b += n.b;
  return *this;
}

Complex
Complex::subtract(const Complex &n)
{
  a -= n.a;
  b -= n.b;
  return *this;
}

Complex
Complex::multiply(const Complex &n)
{
  a = a * n.a - b * n.b;
  b = a * n.b + b * n.a;
  return *this;
}

Complex
Complex::divide(const Complex &n)
{
  a = (a * n.a + b * n.b) / (n.a * n.a + n.b * n.b);
  b = (b * n.a - a * n.b) / (n.a * n.a + n.b * n.b);
  return *this;
}

Complex
Complex::operator+(const Complex &n)
{
  Complex c = *this;
  return c.add(n);
}

Complex
Complex::operator-(const Complex &n)
{
  Complex c = *this;
  return c.subtract(n);
}

Complex
Complex::operator*(const Complex &n)
{
  Complex c = *this;
  return c.multiply(n);
}

Complex
Complex::operator/(const Complex &n)
{
  Complex c = *this;
  return c.divide(n);
}

string
Complex::toString()
{
  string str = to_string(a);// + (std::to_string(b)) + "i";
  return str;
}
