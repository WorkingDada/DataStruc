#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  size_t pos = position - begin();
  T *arr = new T[mSize+last-first];
  int count = 0;
  int i = 0;
  for (; i < mSize ; i++){
    if (i == pos){
      for (auto it = first ; it != last ; it++){
        arr[i+count] = *it;
        count++;
      }
    }
    arr[i+count] = mData[i];
  }
  if (pos == mSize){
    for (auto it = first; it != last ; it++){
      arr[i+count] = *it;
      count++;
    }
  }
  delete [] mData;
  mData = arr;
  mSize = mSize+last-first;
  mCap = mSize;
}

#endif
