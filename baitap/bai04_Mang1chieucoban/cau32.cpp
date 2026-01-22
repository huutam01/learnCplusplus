#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
    int n; cin >> n;
    int k; cin >> k;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int tmp[n];
    for (int i = k; i < n ; i++ ) {
        tmp[i-k] = a[i];
    }
    for (int i = 0; i < k ; i++ ) {
        tmp[n-k+i] = a[i];
    }
    for (int i = 0; i < n ; i++ ) {
        cout << tmp[i] << ' ';
    }


}
