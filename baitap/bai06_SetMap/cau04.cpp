#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
    int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
	    cin >> a[i];
	}
	multiset <int> se;
	for (int i = 0; i < n ; i++ ) {
	    se.insert(a[i]);
	}
    int q; cin >> q;
    while(q--) {
        int tt, tmp; cin >> tt >> tmp;
        if(tt == 1 ) se.insert(tmp);
        else if(tt == 2) se.erase(tmp);
        else if(tt == 3) {
            if(se.find(tmp) == se.end()) cout << "NO";
            else cout << "YES";
        }

    }
}
