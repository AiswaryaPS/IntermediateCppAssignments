#include"point.h"
Point::Point():m_x(0),m_y(0){
}
 Point::Point(int a,int b):m_x(a),m_y(b){
}
 Point::Point(const Point& ref):m_x(ref.m_x),m_y(ref.m_y){
 }
 Quadrant Point::quadrant() const
 {
 if((m_x>=0)&&(m_y>=0)){
 return Q1;
 }
 else if((m_x<=0)&&(m_y>=0)){
 return Q2;
 }
 else if((m_x<=0)&&(m_y<=0)){
 return Q3;
 }
 else {
 return Q4;
 }
}
 
 bool Point::isOrigin() const{
 return((m_x==0)&&(m_y==0));
 }
 bool Point::isOnXAxis() const{
 return(m_y==0);
 }
 bool Point::isOnYAxis() const{
 return(m_x==0);
 }
 void Point::display() const{
 std::cout<<m_x<<"+"<<m_y<<"+";
 }
