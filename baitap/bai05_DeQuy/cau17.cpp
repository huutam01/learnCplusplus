#include <bits/stdc++.h>
using namespace std;
#define ll long long

void trai(ll n) {
    if(n < 10){
        cout << n << ' ';
        return;
    }
    trai(n/10);
    cout << n%10 << ' ';
}

void phai(ll n) {
    if(n < 10){
        cout << n << ' ';
        return;
    }
    cout << n%10 << ' ';
    phai(n/10);
}



int main () {
    ll n; cin >> n;
    trai(n);
    cout << endl;
    phai(n);
}
