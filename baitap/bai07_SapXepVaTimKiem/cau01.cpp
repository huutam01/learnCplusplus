#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
	int n; cin >> n;
	set<int> se;
	int a[n];
	for (int i = 0; i < n ; i++ ) {
        cin >> a[i];
	    se.insert(a[i]);
	}
	cout << se.size();
}
