#include <bits/stdc++.h>
using namespace std;
#define ll long long


int dem[1001];

int main () {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
	    cin >> a[i];
	    dem[a[i]]++;
	}
    for(int i = 0; i < n; i++) {
        if(dem[a[i]] > 0) {
            cout << a[i] << ' ' << dem[a[i]] << endl;
            dem[a[i]] = 0;
        }
    }
}
