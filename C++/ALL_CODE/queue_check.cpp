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
            cout << "WRONG" << endl;
            is_wrong = true;
        } else if (abs(l-f) != s){
            cout << "WRONG" << endl;
            is_wrong = true;
        } else { cout << "OK" << endl; }
        if (is_wrong == true){
            int m = 0;
            switch (corr)
            {
            case 1:
                cout << (l+s)%c << endl;
                break;
            case 2:
                cout << abs(f-l) << endl;
                break;
            case 3:
                if (l > m) { m = l; }
                if (s > m) { m = s; }
                if (f > m) { m = f; }
                if (m > s) { m++; }
                cout << m << endl;
                break;
            case 4:
                cout << (f+s)%c << endl;
                break;
            }
        }
     }
}
