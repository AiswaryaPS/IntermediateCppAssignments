#include"garray.h"
template<class T>MyArray<T>::MyArray()
{
 m_arr={0};
 m_len=0;
}
template<class T>MyArray<T>::MyArray(int len){
    m_arr = new T[len];
	m_len = len;
}
  template<class T>MyArray<T>::~MyArray(){
      delete []m_arr;
  }
  template<class T>void MyArray<T>::append(T val){
      static int a=0;
    m_arr[a]=val;
    a++;
  }
  template<class T>T MyArray<T>::at(int index)
{
    return m_arr[index];
}
template<class T>bool MyArray<T>::search(T key) const
{
    for(int a=0;a<m_len;a++)
    {
        if (m_arr[a]==key)
        {
            return true;
        }
        else{return false;}
    }
}
template<class T>T MyArray<T>::sum() const
{
    int sum=0;
    std::cout<<sum;
    for(int i=0;i<m_len;i++)
    {
        sum=sum+m_arr[i];
    }
    return sum;
}
template<class T>T MyArray<T>::min() const
{
    int n = sizeof(m_arr)/sizeof(m_arr[0]);
    sort();
    return m_arr[0];
}
template<class T>T MyArray<T>::max() const
{
    int n = sizeof(m_arr)/sizeof(m_arr[0]);
    sort();
    return m_arr[m_len+1];
}
template<class T>void MyArray<T>::reverse()
{
    int start=0;
    int end=m_len-1;
    while (start < end)
    {
        int tmp = m_arr[start];
        m_arr[start] = m_arr[end];
        m_arr[end] = tmp;
        start++;
        end--;
    }
}
template<class T>void MyArray<T>::sort()
{
    int n = sizeof(m_arr)/sizeof(m_arr[0]);
    int i, j, min, tmp;
    for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (m_arr[j] < m_arr[min])
      min = j;
      tmp = m_arr[i];
      m_arr[i] = m_arr[min];
      m_arr[min] = tmp;
   }
}
