#include"distance.h"
#include <gtest/gtest.h>
namespace {
TEST(Distance, Addition) {
	Distance P1(4,6);
        Distance P2(1,2);
	Distance P3 = P1 + P2;
	EXPECT_EQ(5, P3.getfeets());
	EXPECT_EQ(8, P3.getinches());
}

TEST(Distance, Difference) {
	Distance P1(13, 7);
	Distance P2(12, 6);
	Distance P3 = P1 - P2;
	EXPECT_EQ(1, P3.getfeets());
	EXPECT_EQ(1, P3.getinches());
}
TEST(Distance, PostInc) {
	Distance P1(1, 5);
	Distance P2 = P1++;
	EXPECT_EQ(1, P2.getfeets());
	EXPECT_EQ(5, P2.getinches());
}
TEST(Distance, PreInc) {
	Distance P1(10, 11);
	Distance P2 = ++P1;
	EXPECT_EQ(11, P2.getfeets());
	EXPECT_EQ(12, P2.getinches());
}
}
