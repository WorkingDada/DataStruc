#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  T *arr = new T[mSize+data.size()+1]();
  std::sort(data.begin(),data.end());
  int ins = 0;
  for (size_t i = 0 ; i <= mSize ; i++){
    if (data[ins].first == i){
      arr[i+ins] = data[ins].second;
      ins++;
    }
    arr[i+ins] = mData[i];
  }
  delete [] mData;
  mData = arr;
  mSize = size() + data.size();
  mCap = mSize;
}

#endif
