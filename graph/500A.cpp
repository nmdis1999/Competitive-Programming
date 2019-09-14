#include <bits/stdc++.h>
#define N 10001
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int a[n+1];
    for (int i = 1; i < n; i++) cin >> a[i];
    a[n] = 1;
    for (int curr = 1; curr <= n; curr += a[curr])
    {
        if (curr == t)
        {
            cout <<"YES\n";
            return 0;
        }
    }
    cout <<"NO\n";
        return 0;
}
