#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
	int n; cin >> n;
	int a[n];
	int p = 1e9+7;
	for(int i = 0; i < n; i++) {
	    cin >> a[i];
	}
	ll sum = 0, tich = 1;
	for (int i = 0; i < n ; i++ ) {
	    sum = (sum + a[i])%p;
	    tich = (tich * a[i])%p;
	}
	cout << sum << endl << tich;

}
