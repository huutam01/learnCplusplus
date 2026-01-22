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
	int l, r;
	cin >> l >> r;
	for(vector<int>::iterator it = v.begin()+l; it <= v.begin()+r; it++) {
        cout << *it << ' ';
	}
	cout << endl;
    for(vector<int>::iterator it = v.begin()+r; it >= v.begin()+l; it--) {
        cout << *it << ' ';
    }
}
