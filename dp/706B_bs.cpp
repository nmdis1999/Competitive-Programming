/**
    Interesting drink -> binary search approach
**/
#include <bits/stdc++.h>
#define ll long long
#define N 100001
using namespace std;
ll n;
ll a[N];

ll bSearch( ll coins)
{
    ll l = 0, r = n - 1, mid;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (a[mid] <= coins)
        {
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return l;
}
int main()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    ll q;
    cin >> q;
    while(q--)
    {
        ll coins, ans = 0;
        cin >> coins;
        ans = bSearch(coins);
        cout << ans << endl;
        ///cout << upper_bound(prices.begin(), prices.end(), m) - prices.begin() << endl;
    }

    return 0;
}
