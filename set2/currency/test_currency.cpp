#include "currency.h"
#include <gtest/gtest.h>
namespace {

TEST(Currency, EmptyConnstructor) 
{
    Currency C1;
    Currency C2;
    Currency C3 = (C1 + C2);
    
    EXPECT_EQ(0, C3.getrupees());
    EXPECT_EQ(0, C3.getpaise());
}

TEST(Currency, Addition) 
{
    Currency C1(7,11);
    Currency C2(1,2);
    	
    Currency C3 = (C1 + C2);
    
    Currency C4 = (C1 + 5);
    	
    EXPECT_EQ(8, C3.getrupees());
	EXPECT_EQ(13, C3.getpaise());
	
	EXPECT_EQ(12, C4.getrupees());
	EXPECT_EQ(16, C4.getpaise());
	
}
    	
TEST(Currency, Preincrement) 
{
    Currency C1(7,11);
    
    Currency& C4 = ++C1;    	
    	
    EXPECT_EQ(8, C4.getrupees());
	EXPECT_EQ(12, C4.getpaise());
	
}

TEST(Currency, Postincrement) 
{
	Currency C1(7,11);
    	    	
    Currency C3 = C1++;
    	
    EXPECT_EQ(7, C3.getrupees());
	EXPECT_EQ(11, C3.getpaise());
}
   
TEST(Currency, Equals) 
{
	Currency C1(7,11);
    Currency C2(7,11);    	
      	
    EXPECT_EQ(1, (C1 == C2));
}

}
	
