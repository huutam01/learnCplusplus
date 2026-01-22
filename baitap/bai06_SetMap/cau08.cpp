#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
	int n; cin >> n;
	multiset<int> v;
	while(n--) {
        int tmp; cin >> tmp;
        v.insert(tmp);
	}
	int q; cin >> q;
	while(q--) {
        int tt, tmp; cin >> tt;
        if(tt == 1) {
            cin >> tmp;
            v.insert(tmp);
        }
        else if(tt == 2) {
            cin >> tmp;
            v.erase(tmp);
        }
        else if(tt == 3) cout << *v.begin();
        else cout << *v.rbegin();
	}

}
