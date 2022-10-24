#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  //your code here
  int i,t = 0;
  while (idx > mData[i].size()){
    idx-=mData[i++].size();
    t++;
  }
  return mData[t][i];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  //your code here
  //you MAY need this function
}

#endif
