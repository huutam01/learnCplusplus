#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check(int n) {
    if(n % 2 == 0) return 1;
    return 0;
}



int main () {
    int tmp;
    int le = 0;
    int chan = 0;
    while(cin >> tmp) {
        if(check(tmp)) chan++;
        else le++;
    }
    if(chan > le) cout << "CHAN";
    else if(chan == le) cout << "CHANLE";
    else cout << "LE";

}
