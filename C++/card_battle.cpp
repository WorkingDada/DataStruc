#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n,m;
    multiset<int> teachercards;

    cin >> n >> m;
    while (n--){
        int temp;
        cin >> temp;
        teachercards.insert(temp);
    }
    int all_card = 0,round = 0;
    while (m--){
        round++;
        if (teachercards.size()>=all_card){
            int ncard;
            vector<int> scard;
            cin >> ncard;
            all_card+=ncard;
            while (ncard--){
                int pcard;
                cin >> pcard;
                scard.push_back(pcard);
            }
            for (int i = 0 ; i < scard.size() ; i++){
                auto it = teachercards.upper_bound(scard[i]);
                if (*it <= scard[i]){
                    teachercards = {};
                    break;
                } else {
                    //cout << "use card " << *it << "\n";
                    teachercards.erase(it);
                }
            }
        }
        else {
            break;
        }
    }
    if (m==-1) { round++ ;}
    cout << round;
}