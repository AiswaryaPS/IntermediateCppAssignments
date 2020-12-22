#include"image.h"
Image::Image():m_x(0),m_y(0),m_width(0),m_height(0){

}
  Image::Image(int x,int y,int width, height):m_x(x),m_y(y),m_width(width),m_height(height){

  }
  Image::Image(const Image& ref):m_x(ref.m_x),m_y(ref.m_y),m_width(ref.m_width),m_height(ref.m_height){

  }
  void Image::move(int horz,int vert){
   m_x+=horz;
   m_y+=vert;
  }
  void Image::scale(int val){
    m_width*=val;
    m_height*=val;

  }
  void Image::resize(int width,int height){
   m_width=width;
   m_height=height;
  }
  void Image::dispay() const{
 std::cout<<m_x<<m_y<<m_width<<m_height;
  }