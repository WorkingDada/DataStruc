#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
  if (mSize <= 1) { return ;}
  mHeader->next = mHeader->next->next;
  mHeader->prev->next = mHeader->next->prev;
  mHeader->prev->next->prev = mHeader->prev;
  mHeader->prev = mHeader->prev->next;
  mHeader->next->prev = mHeader;
  mHeader->prev->next = mHeader;
}

#endif
