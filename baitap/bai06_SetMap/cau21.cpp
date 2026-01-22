#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
    int n;
    cin >> n;
    set<char> v;
    char a[n];

    for (int i = 0; i < n ; i++ ) {
        cin >> a[i];
        v.insert(a[i]);
    }
    cout << v.size() << endl;

    for(auto x : v) {
        cout << x << ' ';
    }
    cout << endl;

    for(auto it = v.rbegin(); it != v.rend(); ++it){
        cout << *it << ' ';
    }
}
