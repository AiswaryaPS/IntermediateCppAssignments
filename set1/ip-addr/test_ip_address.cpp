#include"ip_address.h"
#include <gtest/gtest.h>
namespace {

TEST(ipaddress,Default_Constructor) {
    IPAddress A1;
    std::string ExpectedOut="Your IP Address is: 127.0.0.0";
    testing::internal::CaptureStdout();
    A1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(ipaddress,Parameterized_Constructor) {
    IPAddress A1(127,1,1,0);
    std::string ExpectedOut="Your IP Address is: 127.1.1.0";
    testing::internal::CaptureStdout();
    A1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(ipaddress,OneParameterTest) {
    IPAddress A1(1);
    std::string ExpectedOut="Your IP Address is: 1.1.1.1";
    testing::internal::CaptureStdout();
    A1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(ipaddress,isLoopBackTest) {
    IPAddress A1(127,0,0,1);
    EXPECT_EQ(true,A1.isLoopBack());
}

TEST(ipaddress,getIpClassTest) {
    IPAddress A1(123,1,1,0);
    std::string ExpectedOut="IPClass:  A";
    testing::internal::CaptureStdout();
    A1.getIPClass();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
}
