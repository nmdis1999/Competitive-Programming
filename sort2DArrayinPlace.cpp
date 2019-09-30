#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
            pq.push(a[i][j]);
        }
    }
    ll i = 0;
    while (!pq.empty() && i < n)
    {
        for (ll j = 0; j < m; j++)
        {
            ll top = pq.top(); pq.pop();
            if (top != a[i][j])
                a[i][j] = top;
        }
        i++;
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
            cout <<a[i][j]<<" ";
        cout <<"\n";
    }
    return 0;
}
