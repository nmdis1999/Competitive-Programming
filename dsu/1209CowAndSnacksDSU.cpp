/**
*   This is easier than dfs
*   example:6 5
            2 3
            2 1
            3 4
            6 5
            4 5

    step 1 ->  3
              /
             2
    step 2 -> 1
             /
            3
           /
          2
    step 3 ->  4
              /
             1
            /
           3
          /
         2
   step 4 ->    4  and 5
               /      /
              1      6
             /
            3
           /
          2
  step 5 ->  5
            / \
           4   6
          /
         1
        /
       3
      /
    2

   ans = 0, since no two find_set had same parent
*
*/
#include <bits/stdc++.h>
#define MAXN 100001
using namespace std;

int n, k;
int par[MAXN];
int find_set(int x)
{
    return par[x] == x ? x : par[x] = find_set(par[x]);
}
void union_set(int x, int y)
{
    par[find_set(x)] = find_set(y);
}
int main()
{
    cin >> n >> k;
    int res = 0;
    for (int i = 1; i <= n; i++) par[i] = i;
    for (int i = 1; i <= k; i++)
    {
        int x, y;
        cin >> x >> y;
        res += find_set(x) == find_set(y) ? 1 : 0;
        union_set(x, y);
    }
    cout << res << endl;
    return 0;
}
