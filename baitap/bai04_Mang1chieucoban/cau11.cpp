#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f[93];

void fibo() {
    f[1] = 0;
    f[2] = 1;
    for(int i = 3; i <= 93; i++){
        f[i] = f[i-1] + f[i-2];
    }
}
ll checkfibo(ll n) {
    for(int i = 1; i <= 93; i++) {
        if(f[i] == n) {
                return 1;
        }
    }
    return 0;
}



int main () {
    fibo();
    int n; cin >> n;
    ll a[n];
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(checkfibo(a[i])) {
            cout << a[i] << ' ';
            cnt++;
        }
    }
    if(cnt == 0) cout << "NONE";
}
