#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
        cin >> a[i];
	}
	int x; cin >> x;
	int lon = 0, nho = 0;
	for(int i = 0; i < n; i++) {
        if(a[i] < x) lon++;
	}
	for(int i = 0; i < n; i++) {
        if(a[i] > x) nho++;
	}
	cout << lon << endl << nho;


}
