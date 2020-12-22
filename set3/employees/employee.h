#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H

class IEmployee {
  public:
  virtual void payroll()=0;
  virtual void appraisal()=0;
};

class Employee:public IEmployee {
  std::string m_empid;
  std::string m_name;
  double m_salary;
  int m_exp;
  public:
  Employee(std::string id, std::string name, double salary,int exp);
  virtual void display();
}

#endif
  
