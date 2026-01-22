#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
	int n; cin >> n;
	int a[n];
	int k; cin >> k;
	for(int i = 0; i < n; i++) {
	    cin >> a[i];
	}
	int sum = 0;
	for(int i = 0; i < k; i++) {
        sum += a[i];
	}
    cout << sum << ' ';
    for(int i = 1; i <= n-k; i++) {
        sum = sum - a[i-1] + a[i+k-1];
        cout << sum << ' ';
    }
}
