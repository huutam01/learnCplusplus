#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool chan(ll n) {
    if(n < 10) {
        if(n % 2 == 0) return true;
        else return false;
    }
    else {
        if(n % 10 % 2 == 1) return false;
        else return chan(n/10);
    }
}



int main () {
    ll n; cin >> n;
    if(chan(n)) cout << "YES";
    else cout << "NO";
}
