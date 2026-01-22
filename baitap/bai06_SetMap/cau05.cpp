#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
    int n; cin >> n;
    map <char, int> mp;
    while(n--) {
        char tmp; cin >> tmp;
        mp[tmp]++;
    }
    auto it = mp.begin();
    cout << (*it).first << ' ' << (*it).second << endl;


    cout << endl;

    auto it1 = mp.rbegin();
    cout << (*it1).first << ' ' << (*it1).second << endl;

    cout << endl;

    for(auto x : mp) {
        cout << x.first << ' ' << x.second << endl;
    }

    cout << endl;

    for(auto it2 = mp.rbegin(); it2 != mp.rend(); ++it2) {
        cout << it2->first << ' ' << it2->second << endl;
    }



}
