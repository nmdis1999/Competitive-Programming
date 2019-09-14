#include <bits/stdc++.h>
using namespace std;
int n, m;
char grid[51][51];
bool isCycle(char** grid)
{
    bool visited[51];
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (!dfs(j))
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];
    }
    bool visited[n][m];
    memset(visited, false, sizeof(visited));
    if (!isCycle(grid, visited))
        cout <<"No\n";
    else
        cout <<"Yes\n";
    return 0;
}
