#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T> void CP::queue<T>::back_to_front() {
    if (size() == 0){
        return;
    }
    size_t nf = (mFront+mCap-1)%mCap;
    mData[nf] = mData[(mFront+mSize-1)%mCap];
    mFront = nf;
}

#endif
