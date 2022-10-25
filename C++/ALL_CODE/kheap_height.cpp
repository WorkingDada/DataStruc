#include <iostream>
#include <math.h>

#define ll long long
int main()
{
    ll n,k;
    ll i=1,m=0;
    std::cin >> n >> k;
    if (k == 1){
        std::cout << n-1;
    } else {
        while (n>0){
            n -= i;
            i *= k;
            m++;
        }
        std::cout << m-1;
    }
}
