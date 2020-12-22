#include"gpoint.h"
#include "gtest/gtest.h"
using namespace 
{
    TEST(Point,Parameterised_constructor)
{
    Point <int> P1(2,5);
    Point <int> P2(-4,8);
    Point <int> P3(-3,-1);
    Point <int> P4(5,-7);
    EXPECT_EQ(1,P1.quadrant());
    EXPECT_EQ(2,P2.quadrant());
    EXPECT_EQ(3,P3.quadrant());
    EXPECT_EQ(4,.P4quadrant());
}
}