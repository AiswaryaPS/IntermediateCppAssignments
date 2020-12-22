#ifndef __ENGINEER_H
#define __ENGINEER_H

#include "employee.h"

class Engineer : public Employee {
  int m_projCode;
  public:
  Engineer(std::string id, std::string name, double salary,int exp,int code);
  void payroll();
  void appraisal();
  void display();
};

#endif
  
