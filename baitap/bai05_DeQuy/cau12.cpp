#include <bits/stdc++.h>
using namespace std;
#define ll long long


void hex1(ll n) {
    if(n == 0) return;
    hex1(n/16);
    int r = n%16;
    if(r < 10) cout << r;
    if(r > 10) cout << char(r+55);

}


int main () {
    ll n; cin >> n;
    if(n == 0) return 0;
    else hex1(n);
}
