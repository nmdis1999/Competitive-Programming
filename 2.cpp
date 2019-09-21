#include <bits/stdc++.h>
#define MOD  1000000007
#define MAXN 1000001
#define ll long long
using namespace std;
ll t, n;
ll f[MAXN];
ll fact[MAXN];

void preprocess()
{
    fact[1] = 1, fact[2] = 2;
    for (int i = 3; i < MAXN; i++)
    {
        fact[i] = ((fact[i-1]%MOD)*i)%MOD;
    }
    f[1] = 1;
    for (ll i = 2; i < MAXN; i++)
        f[i] = ((f[i-1]%MOD)*(fact[i]%MOD))%MOD;
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    preprocess();
    while (t--)
    {
        ll n;
        cin >> n;
        /*for (ll i = 1; i <= n; i++)
            cout <<f[i]<<" ";
        for (ll i = 1; i <= n; i++)
            cout <<fact[i]<<" ";*/
        cout << f[n] % MOD<< endl;
    }
    return 0;
}
