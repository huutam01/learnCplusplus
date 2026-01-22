#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
	int n; cin >> n;
	set<pair<int, int>> v;
	while(n--) {
        int x, y; cin >> x >> y;
        v.insert({x, y});
	}
	cout <<  v.size();
}
