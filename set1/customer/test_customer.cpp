#include"customer.h"
#include <gtest/gtest.h>
namespace {
TEST(Customer,Empty_Constructor){
    Customer C1;
    C1.credit(0);
    C1.makeCall(0);
    EXPECT_EQ(0.0,C1.getBalance());
}
TEST(Customer,Parameterised_Constructor){
    Customer C1("112","Surya","redmi",0);
    C1.credit(200);
    C1.makeCall(50);
    EXPECT_EQ(150.0,C1.getBalance());
}
TEST(Customer,Copy_Constructor){
    Customer C1("112","Surya","redmi",100);
    C1.credit(200);
    C1.makeCall(50);
    EXPECT_EQ(250.0,C1.getBalance());
}
}
