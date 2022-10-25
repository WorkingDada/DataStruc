#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  //your code here
  size_t i = 0;
  for (size_t i = 0 ; i < mSize ; i++){
    if (idx >= mData[i].size()){
      i++ ; idx-=mData[i].size();
    } else {
      break;
    }
  }
  return mData[i][idx];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  //your code here
  //you MAY need this function
}

#endif
