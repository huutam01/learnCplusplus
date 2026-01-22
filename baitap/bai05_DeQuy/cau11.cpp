#include <bits/stdc++.h>
using namespace std;
#define ll long long

void convert(ll n) {
	if(n == 0) {
	return;
	}
	convert(n / 2);
	cout << n % 2;
}

int main() {
	ll n; cin >> n;
	if(n == 0) cout << 0 << endl;
	else convert(n);
}
