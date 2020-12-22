#include"garray.h"
#include <gtest/gtest.h>
namespace {
TEST(MyArray,Parameterised_Constructor)
{
    MyArray <int> a(2);
    a.append(3);
    a.append(4);
    EXPECT_EQ(7,a.sum());
}
}
