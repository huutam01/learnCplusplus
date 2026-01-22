#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
    vector<int> v;
    int m; cin >> m;
    for(int i = 0; i < m; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int n; cin >> n;
    int tt;
    int vt;
    for(int i = 0; i < n; i++) {
        cin >> tt;
        cin >> vt;
        if(tt == 1) {
            int gt; cin >> gt;
            v.insert(v.begin()+ vt, gt);
        }
        if(tt == 2) {
            v.erase(v.begin()+ vt);
        }
    }

    if(v.empty()) cout << "EMPTY";
    else {
        for(int x : v) {
            cout << x << ' ';
        }
    }
}
