#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  if ( a == b || mSize == 0){
    return;
  }

  //-------------------------------//
  int count = 0;
  while (a != b){
    if (*a == value){
        a.ptr->prev->next = a.ptr->next;
        a.ptr->next->prev = a.ptr->prev;
        --mSize;
        ++count;
    }
    a++;
  }
  //-------------------------------//
  while (count--){
    node* tmp = new node(value,NULL,NULL);
    output.mHeader->next->prev = tmp;
    tmp->next = output.mHeader->next;
    output.mHeader->next = tmp;
    tmp->prev = output.mHeader;
    output.mSize++;
  }
}

#endif
