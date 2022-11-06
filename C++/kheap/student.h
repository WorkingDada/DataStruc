#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T tmp = mData[idx];
    while (idx > 0){
        size_t p = (idx-1)/4;
        if (mLess(tmp,mData[p])) break;
        mData[idx] = mData[p];
        idx = p;
    }
    mData[idx] = tmp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T tmp = mData[idx];
    size_t c;size_t n;
    while ((c = idx*4+1) < mSize){
        n = c;
        if (c+1 < mSize && mLess(mData[n],mData[c+1])) {n = c+1;}
        if (c+2 < mSize && mLess(mData[n],mData[c+2])) {n = c+2;}
        if (c+3 < mSize && mLess(mData[n],mData[c+3])) {n = c+3;}
        if (mLess(mData[n],tmp)) break;
        mData[idx] = mData[n];
        idx = n;
    }
    mData[idx] = tmp;
}

#endif

