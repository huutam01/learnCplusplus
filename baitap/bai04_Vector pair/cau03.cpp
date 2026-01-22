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
	sort(v.begin(), v.end());
	for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
	}
	cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    }
}
