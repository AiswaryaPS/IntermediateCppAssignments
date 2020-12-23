#include"employee.h"
#include"engineer.h"
#include"manager.h"
#include"trainee.h"
Employee::Employee(std::string id, std::string name, double salary,int exp):m_empid(id),m_name(name),m_salary(salary),m_exp(exp)
{
}
Manager::Manager(std::string id, std::string name, double salary,int exp,int code,int reprtees):
Employee(id,name,salary,exp),m_projCode(code),m_reportees(reprtees){
    }
Trainee::Trainee(std::string id, std::string name, double salary,int exp,std::string track_code,double score):
Employee(id,name,salary,exp),m_track(track_code),scores(score){
    }

Engineer::Engineer(std::string id, std::string name, double salary,int exp,int code):Employee(id,name,salary,exp),m_projCode(code){

}
void Employee::display(){
    cout<<m_empid<<" "<<m_name<<" "<<m_salary<<" "<<m_exp<<endl;
}
int Employee::salary()
{
    return m_salary;
}

double Manager::payroll(){
    int paym = salary();
    cout<<paym<<endl;
    return paym;
}

double Manager::appraisal(){
    int paym = salary();
    int appr = 0.15*paym;
    cout<<appr<<endl;
    return appr;
}

double Trainee::payroll(){
    int paym = salary();
    cout<<paym<<endl;
    return paym;
}

double Trainee::appraisal(){
    int paym = salary();
    int appr=0;
    if (scores>50)
        appr = 0.05*paym;
    else
        appr = 0;
    cout<<appr<<endl;
    return appr;
}

double Engineer::payroll(){
    int paym= salary();
     cout<<paym<<endl;
     return paym;
}

double Engineer::appraisal(){
    int paym = salary();
    int appm = 0.10*pay3;
    cout<<appr<<endl;
    return appr;
}


