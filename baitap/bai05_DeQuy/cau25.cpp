#include <bits/stdc++.h>
using namespace std;
#define ll long long

int bina(int a[], int l, int r, int x) {
    if(l > r ) {
    return 0;
    }
    int m = (l+r)/2;
    if(x == a[m]) {
        return 1;
    }
    else if(x > a[m]) return bina(a, l, m-1, x);
    else return bina(a, m+1, r, x);

}



int main () {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n ; i++ ) {
        cin >> a[i];
    }
    int x; cin >> x;
    if(bina(a,0, n-1, x)) cout << "1";
    else cout << "0";

}
