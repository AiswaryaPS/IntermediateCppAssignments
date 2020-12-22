#include "gcomplex.h"
#include "gtest/gtest.h"
namespace {
TEST(Complex,Empty_constructor)
{
    Complex <int> n;
    EXPECT_EQ(0,n.real());
    EXPECT_EQ(0,n.imag());
}

TEST(Complex,Parameterised_Constructor)
{
    Complex <double> n(1.2,4.3);
    EXPECT_EQ(1.2,n.real());
    EXPECT_EQ(4.3,n.imag());
}
}
