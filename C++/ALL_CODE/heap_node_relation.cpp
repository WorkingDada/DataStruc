#include <iostream>

void a_is_ancestor(){
    std::cout << "a is an ancestor of b\n";
}
void b_is_ancestor(){
    std::cout << "b is an ancestor of a\n";
}
void same_node(){
    std::cout << "a and b are the same node\n";
}
void not_related(){
    std::cout << "a and b are not related\n";
}

int main()
{
    int a,b,m,n;
    std::cin >> m >> n;
    while (n--){
        std::cin >> a >> b;
        int mn = std::min(a,b);
        if (a == b){
            same_node();
        }
        else if (mn == a){
            while (a < b){
                b = (b-1)/2;
            }
            if (b == a){
                a_is_ancestor();
            } else {
                not_related();
            }
        } 
        else if (mn == b){
            while (b < a){
                a = (a-1)/2;
            }
            if (b == a){
                b_is_ancestor();
            } else {
                not_related();
            }
        }
    }
}