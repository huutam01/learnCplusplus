#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
    vector<int> v;
    int n; cin >> n;
    int tt, so;
    for (int i = 0; i < n ; i++ ) {
        cin >> tt;
        if(tt == 1) {
            cin >> so;
            v.push_back(so);
        }
        else if(tt == 2 && !v.empty()) {
                v.pop_back();
        }

    }
    if(v.empty()) cout << "EMPTY";
    else {
        for(int x : v) {
            cout << x << ' ';
        }
    }
}
