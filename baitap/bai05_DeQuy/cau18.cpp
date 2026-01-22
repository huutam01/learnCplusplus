#include <bits/stdc++.h>
using namespace std;
#define ll long long

int tongchan(ll n) {
    if(n < 10) {
        if(n % 2 == 0) return n;
        else return 0;
    }

    if(n % 2 == 0) return n%10 + tongchan(n/10);
    else return tongchan(n/10);

}
int tongle(ll n) {
    if(n < 10) {
        if(n % 2 != 0) return n;
        else return 0;
    }
    if(n % 2 != 0) return n%10 + tongle(n/10);
    else return tongle(n/10);

}





int main () {
    ll n; cin >> n;
    cout << tongchan(n) << endl << tongle(n);
}
