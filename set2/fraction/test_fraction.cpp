#include "fraction.h"
#include <gtest/gtest.h>
namespace {
TEST(Fraction,Empty_constructor)
{
Fraction F1;
EXPECT_EQ(0,F1.isSimplest());
}
TEST(Fraction,Parameter_constructor)
{
Fraction F1(3,4);
Fraction F2(2,3);
Fraction F3;
F3=F1+F2;
EXPECT_EQ(0,F3.isSimplest());
}
TEST(Fraction,constructor)
{
Fraction F1(1,10);
EXPECT_EQ(0,F1.isSimplest());
}
}

