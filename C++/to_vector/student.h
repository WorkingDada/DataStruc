#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  size_t toint = k;
  size_t to_size = std::min(mSize,toint);
  for (size_t i = 0 ; i < to_size ; i++){
    res.push_back(mData[(mFront+i)%mCap]);
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  T *arr = new T[to-from]();
  size_t c = 0;
  for (auto i = from ; i < to ; i++){
    arr[c++] = *i;
  }
  mData = arr;
  mSize = to-from;
  mCap  = mSize;
  mFront = 0;
}

#endif
