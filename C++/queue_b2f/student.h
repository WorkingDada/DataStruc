#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T> void CP::queue<T>::back_to_front() {
    if (mSize == 0){
        return;
    }
    T temp = mData[(mFront+mSize-1)%mCap];
    if (mFront == 0){
        mFront = mCap - 1;
    } else {
        mFront--;
    }
    mData[mFront] = temp;
}

#endif
