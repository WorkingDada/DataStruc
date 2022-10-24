#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  std::sort(data.begin(),data.end());
  T *arr = new T[mSize+data.size()+1]();
  size_t j = 0;
  for (size_t i = 0 ; i <= mSize ; i++){
    if (data[j].first != i){
      arr[i+j] = mData[i];
    } else {
      arr[i+j] = data[j].second;
      j++;
    }
  }
  delete [] mData;
  mData = arr;
  mSize = mSize+data.size();
  mCap = mSize;
}

#endif
