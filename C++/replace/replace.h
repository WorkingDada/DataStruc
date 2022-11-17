void replace(const T& x, list<T>& y) {
  auto it = begin();
  for (; it != end() ;){
    if (*it == x){
      it = erase(it);
      for (T x : y){
        insert(it,x);
      }
    } else {
      it++;
    }
  }
}
