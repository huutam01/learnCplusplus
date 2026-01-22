#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
	int n; cin >> n;
	char a[n];
	for(int i = 0; i < n; i++) {
	    cin >> a[i];
	}
	vector<pair<char, int>> v;
	for(int i = 0; i < n; i++) {
        int use = 0;
        for (pair<char, int> &it : v) {
            if(it.first == a[i]) {
                it.second++;
                use = 1;
                break;
            }
        }
        if(use == 0) v.push_back({a[i], 1});
	}
	for(auto it : v) {
        cout << it.first << ' ' << it.second << endl;
	}
}
