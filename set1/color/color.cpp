#include"color.h"
Color::Color():m_r(0),m_g(0),m_b(0){

}
Color::Color(int r,int g,int b):m_r(r),m_g(g),m_b(b){

}      
Color::Color(int val):m_r(val),m_g(val),m_b(val){

  }               
Color::Color(std::string val):m_r(val),m_g(val),m_b(val){

}   
 /* Colour::Colour(colour_t a){
    switch (a)
    {
        case RED:
            m_r=255;
            m_g=0;
            m_b=0;
            break;
        case GREEN:
            m_r=0;
            m_g=255;
            m_b=0;
            break;
        case BLUE:
            m_r=0;
            m_g=0;
            m_b=255;
            break;
        case WHITE:
            m_r=0;
            m_g=0;
            m_b=0;
            break;
        case BLACK:
            m_r=255;
            m_g=255;
            m_b=255;
            break;
    }
    }*/
}          
  void Color::invert(){
        m_r=255-m_r;
        m_g=255-m_g;
        m_b=255-m_b;
  }
  void Color::display() const{
        cout<<"r="<<m_r<<endl;
        cout<<"g="<<m_g<<endl;
        cout<<"b="<<m_b<<endl;
    
  }