#include <bits/stdc++.h>
#define MAXN 30
using namespace std;
vector<vector<int>> adj;
vector<bool> visited(MAXN, false);
int V;
void dfs(int u)
{
    visited[u] = true;
    for (auto w : adj[u])
        if (!visited[w])
        dfs(w);
}
int dfs_util()
{
    int num = 0;
    for (int i = 1; i <= V; i++)
    {
        if (!visited[i])
        {
            num++;
            dfs(i);
        }
    }
    return num;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> V;
        for (int i = 1; i <= V; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int ans = dfs_util();
        for (int i = 0; i <= MAXN; i++)
            adj[i].clear();
    }
    return 0;
}
