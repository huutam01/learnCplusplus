#include <bits/stdc++.h>
using namespace std;
#define ll long long

int ngto(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return 0;
    }
    return n > 1;
}
int tn(int n) {
    int s = 0;
    int tp = n;
    while(n) {
        s = s*10 + n%10;
        n /= 10;
    }
    return s == tp;
}

int cp(int n) {
    int c = sqrt(n);
    return c*c == n;
}

int tongngto(int n) {
    int s = 0;
    while(n) {
        s += n%10;
        n /= 10;
    }
    return ngto(s);
}



int main () {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int d1 = 0, d2 = 0, d3 = 0, d4 = 0;
    for (int i = 0; i < n ; i++ ) {
        if(ngto(a[i])) d1++;
        if(tn(a[i])) d2++;
        if(cp(a[i])) d3++;
        if(tongngto(a[i])) d4++;
    }

    cout << d1 << endl << d2 << endl << d3 << endl << d4;

}
