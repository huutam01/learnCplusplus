#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
    int n; cin >> n;
    int x, k; cin >> x >> k;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = n; i >= k; i--) {
        a[i] = a[i-1];
    }
    a[k-1] = x;
    n++;
     for(int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
}
