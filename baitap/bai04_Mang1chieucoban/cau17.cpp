#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool dx(int a[], int n) {
     for (int i = 0; i < n/2 ; i++ ) {
        if(a[i] != a[n - i - 1]) {
            return false;
        }
    }
    return true;
}



int main () {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
	    cin >> a[i];
	}
    if(dx(a, n)) cout << "YES";
    else cout << "NO";
}
