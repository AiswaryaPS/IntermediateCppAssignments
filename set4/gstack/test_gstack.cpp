#include"gstack.h"
#include "gtest/gtest.h"
using namespace 
{
TEST(MyStack, Empty_Constructor) {
  MyStack<int> S1;
  EXPECT_EQ(true, S1.isEmpty());
  EXPECT_EQ(false, S1.isFull());
}

TEST(MyStack, Parametrized_Constructor) {
  MyStack<int> S1(10);
  S1.push(10);
  S1.push(20);
  S1.push(30);
  EXPECT_EQ(false, S1.isEmpty());
  EXPECT_EQ(false, S1.isFull());
  EXPECT_EQ(30, S1.peek());
  EXPECT_EQ(30, S1.pop());
  EXPECT_EQ(20, S1.peek());
}
}

