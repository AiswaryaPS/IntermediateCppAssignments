#include"ip_address.h"
IPAddress::IPAddress():ipval("127.0.0.0"){

}
IPAddress::IPAddress(int a,int b, int c, int d ) :
 ipval(to_string(a)+"."+to_string(b)+"."+to_string(c)+"."+to_string(d)){
}

IPAddress::IPAddress(int val) :
    ipval(to_string(val)+"."+to_string(val)+"."+to_string(val)+"."+to_string(val)) {
}

bool IPAddress::isLoopBack() {
    if (ipval=="127.0.0.1")
    {
        return true;
    }
    else{
        return false;
    }
}

void IPAddress::getIPClass(){
string tmp;
int i=0;

while (ipval[i]!='.')
{
    tmp[i]=tmp[i]+ipval[i];
    i=i+1;
}

int icheck=stoi(tmp);
if(icheck>0 && icheck<=127)
{
IPClass c1 = IPClass::a;
std::cout<<"IPClass:  "<<char(c1);
}

if(icheck>127 && icheck<=191)
{
IPClass c1 = IPClass::b;
std::cout<<"IPClass:  "<<char(c1);
}

if(icheck>191 && icheck<=223)
{
IPClass c1 = IPClass::c;
std::cout<<"IPClass: "<<char(c1);
}

if(icheck>223 && icheck<=240)
{
IPClass c1 = IPClass::d;
std::cout<<"IPClass:  "<<char(c1);
}
}

void IPAddress::display() {
    std::cout <<"Your IP Address is: "<<ipval;
};