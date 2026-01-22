#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fmax(ll n) {
    if(n < 10) return n;
    else return max(n%10, fmax(n/10));
}
ll fmin(ll n) {
    if(n < 10) return n;
    else return min(n%10, fmin(n/10));
}




int main () {
    ll n; cin >> n;
    cout << fmax(n) << ' ' << fmin(n);
}
