#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
    T *arr = new T[mSize-pos.size()]();
    int erase = 0;
    for (size_t i = 0 ; i < pos.size() ; i++){
        if (pos[erase]==i){
            erase++;
        } else {
            arr[i-erase]=mData[i];
        }
    }
    delete [] mData;
    mData = arr;
    mSize = size() - pos.size();
    mCap = mSize;
}

#endif
