#include <bits/stdc++.h>
using namespace std;
#define ll long long

int csdt(ll n) {
    if(n < 10) return n;
    else return csdt(n/10);
}



int main () {
    ll n; cin >> n;
    cout << csdt(n);
}
