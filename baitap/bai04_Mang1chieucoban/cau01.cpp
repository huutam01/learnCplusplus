#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main () {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int chan = 0, le = 0;
    int tongchan = 0, tongle = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            chan++;
            tongchan += a[i];
        }
        else {
            le++;
            tongle += a[i];
        }
    }
	cout << chan << endl << le << endl << tongchan << endl << tongle;

}