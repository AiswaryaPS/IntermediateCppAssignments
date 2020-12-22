#include "point.h"
#include <gtest/gtest.h>
namespace {
TEST(Point,Empty_constructor){
Point P1;
EXPECT_EQ(0,P1.quadrant());
EXPECT_EQ(0,P1.isOrigin());
EXPECT_EQ(0,P1.isOnXAxis());
EXPECT_EQ(0,P1.isOnYAxis());
}
TEST(Point,Parameter_constr){
Point P1(3,2);
EXPECT_EQ(1,P1.quadrant());
EXPECT_EQ(0,P1.isOrigin());
EXPECT_EQ(0,P1.isOnXAxis());
EXPECT_EQ(0,P1.isOnYAxis());

}
TEST(Point,Parameter_constr1){
Point P2(3,-2);
EXPECT_EQ(4,P2.quadrant());
EXPECT_EQ(0,P2.isOrigin());
EXPECT_EQ(0,P2.isOnXAxis());
EXPECT_EQ(0,P2.isOnYAxis());
}
TEST(Point,Parameter_constr2){
Point P1(-3,-2);
Point P2=P1;
EXPECT_EQ(3,P2.quadrant());
EXPECT_EQ(0,P2.isOrigin());
EXPECT_EQ(0,P2.isOnXAxis());
EXPECT_EQ(0,P2.isOnYAxis());
}

}
