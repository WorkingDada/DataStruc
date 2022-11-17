#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  auto it = begin();
  int c = 0 ;
  while (it != end()){
    if (*it == value) {
      it.ptr->prev->next = it.ptr->next;
      it.ptr->next->prev = it.ptr->prev;
      c++;
      delete it.ptr;
    }
    it++;
  } 
  mSize -= c;
}

#endif
