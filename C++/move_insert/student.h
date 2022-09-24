#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  int n = 0 ;
  stack<T> temp1,temp2;
  if (m >= s2.size()){
    m = s2.size();
  }
  while (!empty()+1){
    if (n != k){
      temp1.push(top());
      pop();
    } else {
      for (size_t i = 0 ; i < m ; i++){
        temp2.push(s2.top());
        s2.pop();
      }
      while (!temp2.empty()){
        push(temp2.top());
        temp2.pop();
      }
      break;
    }
    n++;
    }
    while (!temp1.empty()){
      push(temp1.top());
      temp1.pop();
    }
  }
#endif
