#include <bits/stdc++.h>
using namespace std;
#define ll long long


void trai(int a[], int n) {
    if(n == 0) return;
    trai(a, n-1);
    cout << a[n-1] << ' ';
}
void phai(int a[], int n) {
    if(n == 0) return;
    cout << a[n-1] << ' ';
    phai(a, n-1);
}


int main () {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n ; i++ ) {
        cin >> a[i];
    }
    trai(a, n);
    cout << endl;
    phai(a, n);

}
