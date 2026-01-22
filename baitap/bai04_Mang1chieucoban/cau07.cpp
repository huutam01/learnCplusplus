#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main () {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n ; i++ ) {
        cin >> a[i];
    }
    int res = 1e3;
    for (int i = 0; i < n ; i++ ) {
        for (int j = i+1; j < n ; j++ ) {
            if(abs(a[i] - a[j]) < res) res = abs(a[i] - a[j]);
        }
    }
    cout << res;

}
