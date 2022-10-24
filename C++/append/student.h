#include "stack.h"
#include "queue.h"
#include <iostream>
using namespace std;
namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        T *arr = new T[mSize+s.mSize]();
        for (size_t i = 0 ; i < s.mSize ; i++){
            arr[i] = s.mData[i];
        }
        for (size_t i = 0 ; i < mSize ; i++){
            arr[i+s.mSize] = mData[i];
        }
        delete [] mData;
        mData = arr;
        mSize += s.mSize;
        mCap = mSize;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        T *arr = new T[mSize+q.mSize]();
        size_t c = 0;
        for (int i = q.mSize-1 ; i >= 0 ;){
            arr[c++] = q.mData[i--];
        }
        for (size_t i = 0 ; i < mSize ; i++){
            arr[c++] = mData[i];
        }
        delete [] mData;
        mData = arr;
        mSize += q.mSize;
        mCap = mSize;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        while (!s.empty()){
            push(s.top());
            s.pop();
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        T *arr = new T[mSize+q.mSize]();
        for (size_t i = 0 ; i < mSize ; i++){
            arr[i] = mData[i];
        }
        for (size_t i = 0 ; i < q.mSize ; i++){
            arr[i+mSize] = q.mData[i];
        }
        delete [] mData;
        mData = arr;
        mSize += q.mSize;
        mCap = mSize;
    }
}
