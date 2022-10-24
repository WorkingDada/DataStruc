#include <iostream>
#include <vector>
#include <map>
using namespace std;
void insert_into_sv(map<int,int> &v, int pos, int value) {
 //your code here
 if (v.find(pos)==v.end()){
    v.insert(v.lower_bound(pos),{pos,value});
    cout << "nf" << endl;
 } else {
    vector<pair<int,int>> v;
    for (auto x : m){
        v.push_back({x.first,x.second});
    }
    
    // for (auto x = v.end() ; x != v.lower_bound(pos) ; x--){
    //     v.
    //     v[x->first+1] = x->second;
    //     //v.insert(x,{x->first+1,x->second});
    // }
    // //v.insert(v.lower_bound(pos),{pos,value});   
    cout << "f" << endl;
 }
}
int main() {
 ios_base::sync_with_stdio(false);cin.tie(0);
 int n;
 map<int,int> v;
 cin >> n;
 for (int i = 0;i < n;i++) {
 int a,b;
 cin >> a >> b;
 insert_into_sv(v,a,b);
 }
 cout << v.size() << "\n";
 for (auto &x : v) {
 cout << x.first << ": " << x.second << "\n";
 }
}