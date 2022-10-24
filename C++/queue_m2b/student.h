#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  if (mSize > 0 ){
    size_t i = 0;
    size_t j = mSize-pos-1;
    while (j--){
      swap(mData[(mFront+pos+i)%mCap],mData[(mFront+pos+i+1)%mCap]);
      i++;
    }
  }
}

#endif
