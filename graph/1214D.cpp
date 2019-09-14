#include <bits/stdc++.h>
#define ll long long
#define MAXN 1000000
using namespace std;
ll n, m;
vector<vector<bool>> ok;
bool dfs(ll i = 0, ll j = 0)
{
    if (i >= n || j >= m || !ok[i][j])
        return false;
    if (i == n - 1 && j == m - 1)
        return true;
    ok[i][j] = false;
    if (dfs(i + 1, j))
        return true;
    if (dfs(i, j + 1))
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
    cin >> n >> m;
	ok.assign(n, vector<bool>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
           ok[i][j] = ch == '.';
        }
    }
    ll res = 0;
    while(dfs())
    {
        res++;
        ok[0][0] = true;
        ok[n-1][m-1] = true;
    }

    cout << res << endl;
    return 0;
}

