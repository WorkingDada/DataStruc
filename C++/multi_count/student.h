#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::vector<std::pair<T,size_t>> r;
    std::map<T,size_t> m;
    for (size_t i = 0 ; i < mSize ; i++){
        m[mData[(mFront+i)%mCap]]++;
    }
    for (size_t i = 0 ; i < k.size() ; i++){
        if (m.find(k[i])!=m.end()){
            r.push_back(std::make_pair(k[i],m[k[i]]));
        } else {
            r.push_back(std::make_pair(k[i],0));
        }
    }
    return r;
}

#endif
