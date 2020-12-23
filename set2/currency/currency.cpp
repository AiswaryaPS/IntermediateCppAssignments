#include"currency.h"
#include<iostream>


Currency:: Currency (): m_rupees (0), m_paise (0)
{
}
Currency:: Currency(int rupees,int paise) : m_rupees(rupees), m_paise(paise)
{
}
Currency :: Currency(int val) : m_rupees(val), m_paise(val)
{
}
  
Currency Currency :: operator+(const Currency& ref)
{
	int rupees = m_rupees + ref.m_rupees;
	int paise = m_paise + ref.m_paise;
	
	if(paise >=100)
	{
		rupees += paise/100;
		paise = paise%100;
	}
	
	return Currency(rupees , paise);
}

Currency Currency :: operator-(const Currency& ref)
{
	int rupees = m_rupees - ref.m_rupees;
	int paise = m_paise - ref.m_paise;
	
	return Currency(rupees , paise);
}

Currency Currency :: operator+(int a)
{
	int rupees = m_rupees + a;
	int paise = m_paise + a;
	
	if( paise >=100)
	{
		rupees += paise/100;
		paise = paise%100;
	}
	
	return Currency(rupees, paise);
}
Currency Currency :: operator-(int b)
{
	int rupees = m_rupees - b;
	int paise = m_paise - b;
	
	return Currency(rupees, paise);
}
Currency& Currency :: operator++()
{
	m_rupees++;
	m_paise++;
	
	return *this;
}
Currency Currency :: operator++(int)
{
	Currency temp(m_rupees, m_paise);
	m_rupees++;
	m_paise++;
	return temp; 
	
}
bool Currency :: operator==(const Currency& ref)
{
	return (m_rupees==ref.m_rupees)&&(m_paise == ref.m_paise);
}

int Currency:: getrupees ()
{
	return m_rupees;
}

int Currency:: getpaise()
{
	return m_paise;
}

void Currency::dispay() const{
std::cout<<m_rupees<<""<<m_paise<<"";
}
