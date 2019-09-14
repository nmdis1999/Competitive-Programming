/**
PARTY - DIV2 C / DIV1 A
Basically find max depth of the node level (starting from index 1) since the group should have NO SUPEREIOR read
definition of supereior carefully
**/
#include <bits/stdc++.h>
using namespace std;
bool visited[2001];
vector<int> g[2001];
int n;
int c = 1;
void dfs(int x, int d)
{
    c = max(c, d);
    for (int i = 0; i < g[x].size(); i++)
    {
        dfs(g[x][i], d + 1);
    }
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
     memset(visited, false, n+1);
    /*for(int i=0;i<2001;i++)
	{
		g[i].clear();
	}*/
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == -1)
            continue;
        g[i].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        dfs(i, 1);
    }
    cout << c << endl;
    return 0;
}
