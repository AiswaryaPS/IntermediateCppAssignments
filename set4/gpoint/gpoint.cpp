#include"gpoint.h"
template<class T>Point<T>::Point():m_x(0),m_y=(0)
{

}
template<class T>Point<T>::Point(T a,T b):m_x(a),m_y(b){

}
template<class T>void Point<T>::distanceFromOrigin(){
    return sqrt((pow(m_x,2))+(pow(m_y,2)));
}
template<class T>Quadrant Point<T>::quadrant(){
if (m_x>=0 &&m_y>=0)
        {
            return Q1;
        }
    else if (m_x<=0 &&m_y>=0)
        {
            return Q2;
        }
    else if (m_x<=0 &&m_y<=0)
        {
            return Q3;
        }
    else
        {
            return Q4;
        }
}
template<class T>void Point<T>::display(){
    cout<<m_x<<m_y;
}