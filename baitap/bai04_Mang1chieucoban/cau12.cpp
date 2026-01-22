#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int nn = 1e7, ln = 0;
    int pnn = 0, pln = 0;
    for (int i = 0; i < n ; i++ ) {
        if(nn >= a[i]) {
            pnn = i;
            nn = a[i];
        }
        if(ln < a[i]) {
            pln = i;
            ln = a[i];
        }
    }
    cout << pnn << ' ' << pln;

}
