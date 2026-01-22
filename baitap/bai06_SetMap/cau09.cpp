#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
    int n, m;
    cin >> n >> m;
    set<int> v;
    int a[n], b[m];

    for (int i = 0; i < n ; i++ ) {
        cin >> a[i];
        v.insert(a[i]);
    }
     for (int i = 0; i < m ; i++ ) {
        cin >> b[i];
        v.insert(b[i]);
    }
    for(auto it = v.rbegin(); it != v.rend(); ++it){
        cout << *it << ' ';
    }
}
