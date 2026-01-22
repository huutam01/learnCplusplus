#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
    int n; cin >> n;
	vector<int> v;
	for (int i = 0; i < n ; i++ ) {
        int tmp; cin >> tmp;
	    v.push_back(tmp);
	}
    int l, r; cin >> l >> r;
    reverse(v.begin() + l, v.begin() + r + 1);
     for(int x : v) {
        cout << x << ' ';
    }
    cout << endl;
     reverse(v.begin() + l, v.begin() + r + 1);
    for(int x : v) {
        cout << x << ' ';
    }
}
