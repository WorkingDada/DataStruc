#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  stack<T> temp;
  int n = 0 ;
  while (!empty()){
    if (n==pos){
      temp.push(value);
    }
    temp.push(top());
    pop();
    n++;
  }
  if (pos == temp.size()){
    temp.push(value);
  }
  while (!temp.empty()){
    push(temp.top());
    temp.pop();
  }
}

#endif
