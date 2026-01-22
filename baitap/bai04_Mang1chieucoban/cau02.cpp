#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ngto(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if( n % i == 0 ) return 0;
    }
    return n > 1;
}

double tbcong(int a[], int n) {
    int dem = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(ngto(a[i])) {
            dem++;
            sum += a[i];
        }
    }
    return  (double)sum/dem;
}


int main () {
	int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << fixed << setprecision(3) << tbcong(a, n);
}