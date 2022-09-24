#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false) ; cin.tie(0);
    int n,m,l;
    vector<int> charplus;
    string character = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    set<string> password;

    cin >> n >> m >> l;

    while (l--){
        int temp;
        cin >> temp;
        temp%=26;
        charplus.push_back(temp);
    }
    while (n--){
        string pass;
        cin >> pass;
        password.insert(pass);
    }
    while (m--){
        string pass,depass;
        cin >> pass;
        int i = 0;
        for (auto x : pass){
            depass+=character[character.find(x)+charplus[i]]; i++;
        }
        if (password.find(depass)!=password.end()){
            cout << "Match\n";
        } else { cout << "Unknown\n"; }
    }
}