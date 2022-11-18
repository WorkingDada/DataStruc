#include <bits/stdc++.h>

void print_range2(int step,int goal){
  if (step < goal){
    print_range2(step+1,goal);
    std::cout << step << " ";
  }
}

int main(){
  print_range2(0,5);
}