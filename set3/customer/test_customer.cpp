#include "customer.h"
#include"postpaid.h"
#include"prepaid.h"
#include <gtest/gtest.h>
namespace{
TEST(Customer,Postpaid) {
    PostpaidCustomer P1("1234","Sona","redmi",500,23);
    P1.postpaidbill(400);
    P1.credit(100);
    P1.makeCall(10);
    EXPECT_EQ(190,P1.getBalance());

}

TEST(Customer,Prepaid) {
    PostpaidCustomer P1("1275","Arya","nokia",300,12);
    P1.credit(200);
    P1.makeCall(30);
    EXPECT_EQ(470,P1.getBalance());
}

}