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
    for (int i = n-k; i < n; i++) {
        tmp[i-n+k] = a[i];
    }
    for (int i = 0; i < n-k ; i++) {
        tmp[k+i] = a[i];
    }
    for (int i = 0; i < n ; i++ ) {
        cout << tmp[i] << ' ';
    }


}
