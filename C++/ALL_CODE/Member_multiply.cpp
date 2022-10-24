#include <bits/stdc++.h>
using namespace std;

void member_multiply(vector<int> &v, vector<pair<vector<int>::iterator,int>> &multiply) {
    vector<int> result;
    sort(multiply.begin(),multiply.end());
    int count = 0;
    for (auto it = v.begin(); it != v.end(); it++){
        if (it != multiply[count].first){
            result.push_back(*it);
        }
        else {
            for (int i = 0 ; i <= multiply[count].second ; i++){
                result.push_back(*it);
            }
            count++;
        }
    }
    v = result;
}
int main()
{
    ios_base::sync_with_stdio(false) ; cin.tie(0) ;

    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    vector<pair<vector<int>::iterator,int>> multiply(m);
    for (int i = 0 ; i < n ; i++) cin >>  v[i];
    for (int i = 0 ; i < m ; i++) {
        int a,b;
        cin >> a >> b;
        multiply[i].first = v.begin()+a;
        multiply[i].second = b;
    }

    member_multiply(v,multiply);

    cout << "======= result ========" << endl;
    cout << v.size() << endl;
    for (auto &x : v){
        cout << x << " ";
    }
    cout << endl;
}