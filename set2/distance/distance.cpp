#include"distance.h"
Distance::Distance():m_feets(0),m_inches(0){
}
Distance::Distance(int feets,int inches):m_feets(feets),m_inches(inches){

}
Distance::Distance(int val):m_feets(val),m_inches(val){

}
Distance Distance::operator+(const Distance& ref){
int feet = m_feets + ref.m_feets;
int inches = m_inches + ref.m_inches;
	
	if(inches >=12)
	{ 
     feet += inches/12;
		inches = inches %12;
	}
	return Distance(feet, inches);
}
Distance Distance::operator-(const Distance& ref){
int feet = m_feets - ref.m_feets;
int inches = m_inches - ref.m_inches;
return Distance(feet,inches);
}
 Distance Distance::operator+(int val){
int feet = m_feets + val;
int inches=m_inches + val;
	
	if(inches >=12)
	{
		feet += inches/12;
		inches = inches %12;
	}
	return Distance(feet, inches);
 }
  Distance Distance::operator-(int val){
int feet = m_feets - val;
int inches=m_inches - val;
return Distance(feet,inches);
  }
  Distance& Distance::operator++(){
    m_feets++;
    m_inches++;
    return *this;
  }
  Distance Distance::operator++(int){
     Distance tmp (m_feets, m_inches);
	m_feets++;
	m_inches++;
	return tmp;
  }
  bool Distance::operator==(const Distance& ref){
    return ((m_feets == ref.m_feets) && (m_inches==ref.m_inches));
  }
  bool Distance::operator<(const Distance& ref){
    return ((m_feets < ref.m_feets) && (m_inches<ref.m_inches));
  }
  bool Distance::operator>(const Distance& ref){
    return ((m_feets > ref.m_feets) && (m_inches>ref.m_inches));
  }
  void Distance::dispay() const{
     std::cout << m_feets<< " + " << m_inches;
  }
int Distance:: getfeets()
{
	return m_feets;
}

int Distance:: getinches()
{
	return m_inches;
}
  //friend std::ostream& operator<<(const std::ostream&, const Distance&);