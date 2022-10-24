 #include <bits/stdc++.h>
 using namespace std;
 int main()
{
    int n ;
    cin >> n;
    while (n--){
        int f,s,c,l,corr;
        bool is_wrong = false;
        cin >> f >> s >> c >> l >> corr;
        if (c < s){
            cout << "WRONG ";
            is_wrong = true;
        } else if (l-f != s){
            cout << "WRONG ";
            is_wrong = true;
        } else { cout << "OK" << endl; }
        if (is_wrong == true){
            switch (corr)
            {
            case 1:
                cout << l-s << endl;
                break;
            case 2:
                cout << l-f << endl;
                break;
            case 3:
                cout << s+1 << endl;
                break;
            case 4:
                cout << s+f << endl;
                break;
            }
        }
     }
}
