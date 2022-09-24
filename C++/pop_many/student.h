#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  if (K > size()){
    mSize = 0 ;
  } else {
    while(K--){
      pop();
    }
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  if (K > size()){
    std::stack<T> res1,res2;
    while (!empty()){
      res1.push(top());
      pop();
    }
    while (!res1.empty()){
      res2.push(res1.top());
      res1.pop();
    }
    return res2;
  } else {
    std::stack<T> res1,res2;
    while (K--){
      res1.push(top());
      pop();
    }
    while (!res1.empty()){
      res2.push(res1.top());
      res1.pop();
    }
    return res2;
  }
}

#endif
