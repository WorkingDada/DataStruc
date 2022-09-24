#include <vector>
#include <set>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> s;
    for (T x : A){
        s.insert(x);
        v.push_back(x);
    }
    for (size_t i = 0 ; i < B.size() ; i++){
        if (s.find(B[i])==s.end()){
            v.push_back(B[i]);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> sB;
    for (size_t n = 0 ; n < B.size() ; n++){
        sB.insert(B[n]);
    }
    for (size_t n = 0 ; n < A.size() ; n++){
        if (sB.find(A[n])!=sB.end()){
            v.push_back(A[n]);
        }
    }
    return v;
}