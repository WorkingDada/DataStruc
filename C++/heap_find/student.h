#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <math.h>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  for (size_t i = 0 ; i < mSize ; ++i){
    if (mData[i] == k){
      return true;
    }
  }
  return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  int max_pos = -1;
  for (size_t i = 0 ; i < mSize ; i++){
    if (mData[i] == k){
      max_pos = i;
    }
  }
  if (max_pos == -1){
    return max_pos;
  } else if (max_pos == 0){
    return 0;
  }
  return int(log2(max_pos));
}

#endif

