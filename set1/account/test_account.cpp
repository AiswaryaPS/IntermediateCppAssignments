#include "account.h"
#include <gtest/gtest.h>
namespace {
TEST(Account,Empty_Constructor){
Account A2;
EXPECT_EQ(0.0,A2.getBalance());
  }
  
TEST(Account,Findbalance){
Account A2("231","Anu",500);
EXPECT_EQ(500.0,A2.getBalance());
}

TEST(Account,Transaction){
Account A2("231","Anu",500);
A2.debit(200);
A2.credit(100);
EXPECT_EQ(400.0,A2.getBalance());
}
}
  
