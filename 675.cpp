#include <bits/stdc++.h>
#define MAXN 1000001
#define MOD 1000000087
#define ll long long
using namespace std;

ll f[MAXN];
ll w[MAXN];
bool prime[MAXN];
ll n;
void pp1()
{
    ///to calculate distinct prime factors using seive of eranthosis
    memset(w, 0, MAXN);
    memset(prime, 0, MAXN);
    for (ll i = 2; i <= MAXN; i++)
    {
        if (prime[i] == true)
        {
            for (ll j = i * 2; j <= MAXN; j++)
            {
                w[j]++;
                prime[j] = false;
            }
        }
    }
}

void pp2(ll n)
{
    ll num = 362800;
    for (ll i = 11; i <= n; i++)
    {
        num *= i;
        f[i] = (w[num] + f[i-1]) % MOD;
    }
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    pp2(n);
    cout << f[n] << endl;
    return 0;
}
