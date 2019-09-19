#include <bits/stdc++.h>
#define ll long long
#define MAXN 100001
using namespace std;
ll n, m;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        priority_queue<ll> pq;
        int vis[n+m];
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < n; i++)
        {
            for (int j  = 0; j < m; j++)
            {
                ll x;
                cin >> x;
                if (!vis[x])
                pq.push(x);
                vis[x] = 1;
            }
        }
        memset(vis, 0, sizeof(vis));
        ll sum = 0;
        while (n--)
        {
            sum += pq.top();
            pq.pop();
        }
        cout << sum << endl;
    }
    return 0;
}
