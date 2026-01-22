#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mark[1000001];



int main () {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
	    cin >> a[i];
	    mark[a[i]]++;
	}
	for (int i = 0; i < n ; i++ ) {
	    if(mark[a[i]] > 0) {
            cout << a[i] << ' ' << mark[a[i]] << endl;
            mark[a[i]] = 0;
	    }
	}


}
