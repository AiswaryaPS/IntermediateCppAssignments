#ifndef __CUSTOMER_H
#define __CUSTOMER_H

#include<string>
#include<cstdint>

enum AccountType {
  Prepaid,
  Postpaid
};

class CustomerBase {
  std::string m_custId;
  std::string m_custName;
  std::string m_phone; 
  double m_balance;
  AccountType m_type;
  public:
  CustomerBase();
  CustomerBase(std::string,std::string,std::string,double);
  CustomerBase(std::string,std::string,std::string);
  CustomerBase(const Customer&);
  void credit(double)=0;           //recharge or billPay
  void makeCall(double)=0;
  double getBalance() const;
  void dispay() const=0;
};

#endif
