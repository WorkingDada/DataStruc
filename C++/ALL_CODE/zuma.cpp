#include <iostream>
#include <list>
int main(){
    std::ios_base::sync_with_stdio(false) ; 
    std::cin.tie(0);
    
    int n,k,v;
    std::cin >> n >> k >> v;

    std::list<int> l ;
    for (size_t i = 0 ; i < n ; i++){
        int c;
        std::cin >> c;
        l.push_back(c);
    }
    l.insert()
}