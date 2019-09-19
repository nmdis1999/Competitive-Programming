#include <bits/stdc++.h>
#define MAXN 100001
using namespace std;

int n, k;
int par[MAXN];
int find_set(int x)
{
    return par[x] == x ? x : par[x] = find_set(par[x]);
}

void union(int x, int y)
{
    par[find_set(x)] = find_set(y);
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++) par[i] = i;
    for (int i = 1; i <= k; i++)
    {
        int x, y;
        cin >> x >> y;
        res += find_set(x) == find_set(y);
        union(x, y);
    }
    return 0;
}
