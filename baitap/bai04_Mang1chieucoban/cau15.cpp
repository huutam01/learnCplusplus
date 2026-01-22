#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ln = 0, l2 = 0;
    int pos = 0;
    for (int i = 0; i < n ; i++ ) {
        if(a[i] >= ln) {
            l2 = ln;
            ln = a[i];
        }
        else if(a[i] > l2) l2 = a[i];

    }
    cout << ln << ' ' << l2;


}
