#include <bits/stdc++.h>
using namespace std;
#define ll long long

int demcs(ll n) {
    if(n < 10) return 1;
    else return 1 + demcs(n/10);

}




int main () {
    ll n; cin >> n;
    cout << demcs(n);
}
