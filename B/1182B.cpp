///is there single + in picture
#include <bits/stdc++.h>
#define ll long long
using namespace std;
char grid[501][501];
ll h, w;
int cnt;
int dfs(int i, int j, int& cnt)
{
    if (i < 0 || j < 0 || i > h || j > w || grid[i][j] == '.')
        return 0;
    if (grid[i][j] == '*')
    {
        if (grid[i+1][j] == '*' && grid[i][j+1] == '*' && grid[i-1][j] == '*'
            && grid[i][j-1] == '*')
                cnt++;
    }
    dfs(i+1, j, cnt);
    dfs(i-1, j, cnt);
    dfs(i, j+1, cnt);
    dfs(i, j-1, cnt);
    return cnt;
}
int main()
{
    cin >> h >> w;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            cin >> grid[i][j];
    }
    int ans = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            {
                cnt = 0;
                ans += cnt;
                cout << ans << endl;
            }
    }
    if (ans == 0 || ans > 1)
        cout <<"NO\n";
    else
        cout <<"YES\n";
    return 0;
}
