#include"AccountBase.h"
#include"SavingsAccount.h"
#include"CreditAccount.h"
#include<gtest/gtest.h>
namespace {
TEST(AccountBase,SavingsAccount){
AccountBase *A1=new SavingsAccount("123","Anu",12000);
A1->debit(1000);
A1->credit(2000);
EXPECT_EQ(13000,A1->getBalance());
}
TEST(AccountBase,CreditAccount){
AccountBase *A2=new SavingsAccount("123","Anu",15000);
A2->debit(1000);
A2->credit(2000);
EXPECT_EQ(16000,A2->getBalance());
}
}
