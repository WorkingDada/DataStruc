#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>
using namespace std;
//you can include any other file here
//you are allow to use any data structure

template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  set<T> s;
  T *arr = new T[mSize]();
  int count = 0;
  for (size_t i = 0 ; i < mSize ; i++){
    if (s.find(mData[i])==s.end()){
      arr[count] = mData[i];
      count++;
    }
    s.insert(mData[i]);
  }
  delete [] mData;
  mData = arr;
  mSize = s.size();
}

#endif
