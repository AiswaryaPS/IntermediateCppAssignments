#include"shape.h"
#include"polygon.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
#include<gtest/gtest.h>
namespace{
TEST(Circle,Area)
{
    Circle C1(50);
    EXPECT_EQ(7850,C1.area());
    EXPECT_EQ(314,C1.circumference());
}
TEST(Triangle,Area)
{
    Triangle T1(3,4,5);
    EXPECT_EQ(6,T1.area());
    EXPECT_EQ(12,T1.circumference());
}
TEST(Rectangle,Area)
{
    Rectangle R1(6,5);
    EXPECT_EQ(30,R1.area());
    EXPECT_EQ(22,R1.circumference());
}
}