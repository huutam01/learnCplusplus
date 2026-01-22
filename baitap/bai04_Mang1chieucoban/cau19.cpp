#include <bits/stdc++.h>
using namespace std;
#define ll long long

void latnguoc(int a[], int n) {
    int l = 0, r = n -1;
    while(l < r) {
        swap(a[l], a[r]);
        ++l, --r;
    }
}



int main () {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    latnguoc(a, n);
    for (int i = 0; i < n ; i++ ) {
        cout << a[i] << ' ';
    }

}
