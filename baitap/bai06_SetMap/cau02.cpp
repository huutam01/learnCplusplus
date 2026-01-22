#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
	    cin >> a[i];
	}
	set <int> se;
	for (int i = 0; i < n ; i++ ) {
	    se.insert(a[i]);
	}
    int q; cin >> q;
    while(q--) {
        int tmp; cin >> tmp;
        if(se.find(tmp) == se.end()) cout << "NO";
        else cout << "YES";
    }


}
