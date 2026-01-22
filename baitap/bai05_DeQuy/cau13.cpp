#include <bits/stdc++.h>
using namespace std;
#define ll long long

int tongcs(ll n) {
    if(n == 0) return 0;
    return tongcs(n/10) + n%10;

}



int main () {
    ll n; cin >> n;
    cout << tongcs(n);

}
