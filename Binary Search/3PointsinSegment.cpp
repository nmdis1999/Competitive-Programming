#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define ll long long int
#define ull unsigned LL
int main()
{
    ll t, n, q;
    cin >> t;
    ll index = 1;
    while (t--)
    {
        cin >> n >> q;
        ll a, b;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        cout <<"Case "<<index++<<": \n";
        while(q--)
        {
            cin >> a >> b;
            ll r = upper_bound(v.begin(), v.end(), b) - v.begin();
            ll l = lower_bound(v.begin(), v.end(), a) - v.begin();
            cout << r - l <<"\n";
        }
    }
    return 0;
}
