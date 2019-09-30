#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll a[n+1];
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]] = 0;
    }
    for (ll i = n-1; i >= 1; i--)
    {
        for (ll j = n - 2; j >= 0; j--)
        {
            if (a[i] < a[j])
                m[a[i]]++;
        }
    }
    m[0] = 0;
    for (ll i = 0; i < n; i++)
        cout << m[a[i]]<<" ";
    return 0;
}
