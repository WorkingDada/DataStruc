#include <iostream>
#include <vector>

int main(){
    int a,n;
    std::vector<int> r;
    std::cin >> a >> n;
    r.push_back(n);
    int i = 0;
    while (69){
        int lhs,rhs;
        n = r[i++];
        lhs = (n*2)+1;
        rhs = (n*2)+2;
        if (lhs < a){
        r.push_back(lhs);
        } else {
            break;
        }
        if (rhs < a){
        r.push_back(rhs);
        } else {
            break;
        }
    }
    std::cout << r.size() << "\n"; 
    for (size_t i = 0 ; i < r.size() ; i++){
        std::cout << r[i] << " ";
    }
}