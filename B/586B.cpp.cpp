#include <bits/stdc++.h>
#define MAXN 1001
#define ll long long
using namespace std;

ll a[MAXN][MAXN], n;
int main()
{
    cin >> n;
    for (ll i = 1; i <= n; i++)
    for (ll j  = 1; j <= n; j++)
    cin >> a[i][j];

    ll a1, a2, a3;
    a2 = sqrt((a[1][2] * a[2][3]) / a[1][3]);
    a1 = a[1][2] / a2;
    a3 = a[2][3] / a2;
    cout << a1 <<" "<< a2 <<" "<< a3 <<" ";
    if (n > 3)
    {
        for (ll i = 4; i <= n; i++)
        {
            ll x = a[1][i] / a1;
            cout << x <<" ";
        }
    cout << endl;
    }
    return 0;
}

