#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
	 int n; cin >> n;
	 vector<pair<int, int>> v;
	for (int i = 0; i < n ; i++ ) {
        int x, y; cin >> x >> y;
	    v.push_back({x, y});
	}
	double td = 0;
    for(pair<int, int> it : v) {
        td = sqrt(pow(it.first, 2)+ pow(it.second, 2));
        cout << fixed << setprecision(2) << td << ' ';
    }
}
