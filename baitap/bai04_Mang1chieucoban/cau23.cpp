#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main () {
    int n; cin >> n;
    int a[n];
    int f[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    f[0] = a[0];
    for (int i = 1; i < n ; i++ ) {
        f[i] = f[i-1] + a[i];
    }
    for (int i = 0; i < n ; i++ ) {
        cout << f[i] << ' ';
    }

}
