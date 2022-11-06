#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <vector>
template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    CP::stack<T> tmp;
    for (size_t i = 0 ; i < a ; i++){
        tmp.push(top());
        pop();
    }
    for (size_t i = a ; i <= b ; i++){
        tmp.push(top());
        tmp.push(top());
        pop();
    }
    while (!tmp.empty()){
        push(tmp.top());
        tmp.pop();
    } 
}

#endif