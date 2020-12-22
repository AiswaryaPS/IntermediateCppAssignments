#ifndef __COMPLEX_H
#define __COMPLEX_H
#include<iostream>
class Complex {
  int m_real;
  int m_imag;
  public:
  Complex();
  Complex(int,int);
  Complex(int);
  Complex operator+(const Complex&);
  Complex operator-(const Complex&);
  Complex operator*(const Complex&);
  Complex& operator++();
  Complex operator++(int);
  bool operator==(const Complex&);
  void dispay() const;
  //friend std::ostream& operator<<(const std::ostream&, const Complex&);
  int get_real();
  int get_img();
};

#endif
