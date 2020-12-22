#include"gcomplex.h"
template<class T>Complex<T>::Complex():m_real(0),m_image(0)
{
}
template<class T>Complex<T>::Complex(T a,T b):m_real(a),m_image(b){

}
template <class T>T Complex<T>::real(){
    return m_real;
    }
template <class T>T Complex<T>::imag(){
    return m_image;
    }
  template <class T>void Complex<T>::display(){
      std::cout<<real()<<imag();
  }
