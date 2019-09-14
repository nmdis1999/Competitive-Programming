#include <bits/stdc++.h>
#define N 100001
using namespace std;
int g[501][501];
int vis[501];
int n, m;
bool findLoop(int v)
{
    if (vis[v] == 1)
        return 1;
    if (vis[v] == 2)
        return 0;
    for (auto& it : g[v])
        if (findLoop(it))
        return 1;
    vis[v] = 2;
    return 0;
}
bool checkLoop()
{
    fill(vis+1, vis+n+1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i] && findLoop(i))
            return 1;
    }
    return 0;
}
int main()
{
    cin >> n >> m;
    memset(g, 0, sizeof(g));
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x][y] =  1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (g[i][j])
            {
                int temp = g[i][j];
                g[i][j] = 0;
                if (checkLoop())
                {
                    cout <<"YES\n";
                    return 0;
                }
                g[i][j] = temp;
            }
        }
    }
    return 0;
}
