#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    
    int n,m,sold;
    vector<int> sp,ss;
    queue<int> order_1,order_2;
    int amount = 0;

    cin >> n >> m;
    while (m--){
        int temp;
        cin >> temp;
        sp.push_back(temp);
    }
    while (n--){
        int dowhat;
        cin >> dowhat;
        if (dowhat==1){
            int a,b;
            cin >> a >> b;
            if (a == 1) {
                order_1.push(b);
            } else {
                order_2.push(b);
            }
        } else if (dowhat==2){
            if (order_1.empty()){
                sold = order_2.front();
                order_2.pop();               
            } else if (order_2.empty()){
                sold = order_1.front();
                order_1.pop();
            } else if (order_1.front() <= order_2.front()){
                sold = order_1.front();
                order_1.pop();
            } else {
                sold = order_2.front();
                order_2.pop();
            }
            amount+=sold;
            ss.push_back(amount);
        }
    }

    for (auto x : sp){
        if ( x > amount ) {
            cout << "-1 ";
        } else {
            auto it = lower_bound(ss.begin(),ss.end(),x);
            cout << (it-ss.begin())+1 << " ";
        }
    }
}