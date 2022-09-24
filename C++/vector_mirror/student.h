#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror(){
  ensureCapacity(size()*2);
  for (size_t i = 0 ; i != size() ; i++){
    mData[mSize*2-1-i] = mData[i];
  }
  mSize*=2;
}

#endif
