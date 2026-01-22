#include <bits/stdc++.h>
using namespace std;
#define ll long long
int MOD = (1e9 + 7);
typedef long long ll;


ll du(ll a, ll b)
{
    return ((a % MOD) * (b % MOD)) % MOD;
}

ll pow(ll a, ll b)
{
    if(b == 0) return 1;

    ll x = pow(a, b / 2);

    if(b % 2 == 0)
    {
        return du(x, x);
    }
    else
    {
        ll res = du(x, x);
        return du(res, a);
    }
}

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << pow(a, b);
}
