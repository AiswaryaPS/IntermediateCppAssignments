#include"fraction.h"
Fraction::Fraction():m_numerator(1),m_denominator(1){
}
Fraction::Fraction(int num,int den):m_numerator(num),m_denominator(den){
}
 Fraction::Fraction(int val):m_numerator(val),m_denominator(val){
 }
 Fraction Fraction::operator+(const Fraction& ref){
  return Fraction((this->m_numerator*ref.m_denominator)+(this>m_denominator*ref.m_numerator),this->m_denominator*ref.m_denominator);
  }
  Fraction Fraction::operator-(const Fraction&){
  return Fraction((this->m_numerator*ref.m_denominator)-(this>m_denominator*ref.m_numerator),this->m_denominator*ref.m_denominator);
  Fraction Fraction::operator*(const Fraction&);
  Fraction Fraction::operator+(int val){
  return Fraction(this->m_numerator+(val*this->m_denominator),this->m_denominator);
  }
  Fraction Fraction::operator-(int val){
  return Fraction(this->m_numerator-(val*this->m_denominator),this->m_denominator);
  bool Fraction::operator==(const Fraction& ref){
  return(m_numerator==ref.m_numerator)&&(m_denominator==ref.m_denominator);
  }
  bool Fraction::operator<(const Fraction& ref){
  return(m_numerator/m_denominator)<(ref.m_numerator/ref.m_denominator);
  bool Fraction::operator>(const Fraction& ref){
  return(m_numerator/m_denominator)>(ref.m_numerator/ref.m_denominator);
  }
  Fraction Fraction::simplify(){
  for(int i=m_numerator/1;i>1;i--){
  if((m_numerator%i==0)&&(m_denominator%i==0))
    {
    m_numerator/=i;
    m_denominator/=i;
    }
   }
   return Fraction(m_numerator,m_denominator);
  }
  bool Fraction::isSimplest() const{
   return(m_denominator%m_numerator!=0);
   }
  void Fraction::dispay() const{
  std::cout<<m_numerator<<"/"<<m_denominator<<"\n";
  }
  std::ostream& operator<<(std::ostream&, const Fraction& ref){
  return cout<<ref.m_numerator<<"/"<<ref.m_denominator;
  }
