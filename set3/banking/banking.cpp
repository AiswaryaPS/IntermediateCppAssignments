#include<iostream>
#include<string>
#include"AccountBase.h"
#include"CreditAccount.h"
#include"SavingsAccount.h"
AccountBase::AccountBase():m_accNumber(""),m_accName(""),m_balance(0.0){
}
 AccountBase::AccountBase(string num,string name,double bal):m_accNumber(num),m_accName(name),m_balance(bal){
 }
 AccountBase::AccountBase(string num,string name):m_accNumber(num),m_accName(name),m_balance(0.0){
 }
 AccountBase::AccountBase(const Account& ref):m_accNumber(ref.m_accNumber),m_accName(ref.m_accName),m_balance(ref.m_balance){
 }
 CreditAccount::CreditAccount():m_accNumber(""),m_accName(""),m_balance(0.0){
 }
 CreditAccount::CreditAccount(string num,string name,double bal):m_accNumber(num),m_accName(name),m_balance(bal){
 }
  CreditAccount::CreditAccount(string num,string name):m_accNumber(num),m_accName(name),m_balance(0.0){
  }
  SavingsAccount()::SavingsAccount():m_accNumber(""),m_accName(""),m_balance(0.0){
 }
  SavingsAccount::SavingAccount(string num,string name,double bal):m_accNumber(num),m_accName(name),m_balance(bal){
 }
  SavingsAccount::SavingsAccount(string num,string name):m_accNumber(num),m_accName(name),m_balance(0.0){
  }
 void AccountBase::debit(double amount){
 return m_balance-amount;
 }
 void AccountBase::credit(double amount){
 return m_balance+amount;
 }
 double AccountBase::getBalance() const{
 return m_balance;
 }
  void AccountBase::dispay() const {
  std::cout<<m_accNumber<<m_accName<<m_balance;
  }
  void SavingsAccount::dispay() const{
  std::cout<<"saving account"<<endl;
  }
  void CreditAccount::dispay() const{
  std::cout<<"credit account"<<endl;
  }
  
  
  
   void credit(double);
