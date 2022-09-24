#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s1,s2,s3;
    for (int i = 1 ; i <= 10 ; i++){
        s1.push(i);
    }
    int n = 5;
    while (n--){
        s2.push(s1.top());
        s1.pop();
    }
    while (!s2.empty()){
        s3.push(s2.top());
        s2.pop();
    }
    while (!s3.empty()){
        cout << s3.top() << " " ;
        s3.pop();
    }
}