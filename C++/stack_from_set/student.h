#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  auto tmpit = first;
  int cap = 0 ;
  while (tmpit != first){
    tmpit++;
    cap++;
  }
  mData = new T[cap]();
  mCap = cap;
  for (size_t i = 0;first != last;first++){
    mData[i] = *first;
    i++;
  }
  mSize = size();
}

#endif
