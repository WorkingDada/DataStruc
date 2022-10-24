#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
  if (mSize > 0 ){
    size_t j = pos;
    while (j--){
      swap(mData[(mFront+pos)%mCap],mData[(mFront+pos-1)%mCap]);
      pos--;
    }
  }    
}

#endif
