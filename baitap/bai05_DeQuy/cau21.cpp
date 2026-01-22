#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check(int a[], int l, int r) {
    if(l >= r) return 1;
    else if(a[r] != a[l]) return 0;
    else return check(a, l+1, r-1);
}



int main () {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n ; i++ ) {
        cin >> a[i];
    }

    if(check(a, 0, n-1)) cout << "YES";
    else cout << "NO";
}
