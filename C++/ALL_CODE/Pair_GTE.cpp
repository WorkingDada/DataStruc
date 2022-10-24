#include <iostream>
#include <string>
using namespace std;
namespace CP {
    template <typename T1,typename T2>
    class pair{
        public :
            T1 first;
            T2 second;
        //---------------OPERATOR-----------------//
        bool operator>=(const pair<T1,T2> &other) const {
            return (this->first > other.first)||((this->first==other.first)&&(this->second>other.second)) ;
        }
    };
}

int main()
{
    CP::pair<int,string> p1,p2;
    int a1,b1;
    string a2,b2;
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    p1.first = a1 ; p1.second = a2;
    p2.first = b1 ; p2.second = b2;
    (p1 >= p2) ? cout << "true" : cout << "false" ;
}