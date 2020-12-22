#ifndef __GSTACK_H
#define __GSTACK_H
#define MAX_SIZE 10
#include<iostream>
constexpr int max_size=50;

template<typename T>
class MyStack {
  T m_arr[max_size];
  int m_top;
  int m_maxlen;
  public:
  MyStack();
  MyStack(int len);
  void push(T val);
  T pop();
  T peek() const;
  bool isEmpty() const;
  bool isFull() const;
};

#endif
