#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
        cin >> a[i];
	}
	int cnt = 0;
	for(int i = 0; i < n; i += 2) {
        if(a[i] % 2 == 0) {
            cout << a[i] << ' ';
            cnt++;
        }
	}
	if(cnt == 0) cout << "NONE";
}
