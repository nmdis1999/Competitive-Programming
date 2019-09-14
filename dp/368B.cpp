#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[100001], a[100001];
ll n, m;
void distinct()
{
    set<ll> s;
    s.insert(a[n - 1]);
    dp[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (s.find(a[i]) == s.end())
        {
            dp[i] = 1 + dp[i + 1];
            s.insert(a[i]);
        }
        else
         dp[i] = dp[i + 1];
    }
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    distinct();
    /*for (int i = 0; i < n; i++)
        cout <<dp[i] <<" ";
    cout << endl;*/
    for (int i = 0; i < m; i++)
    {
        int l;
        cin >> l;
        cout << dp[l-1] << endl;
    }
    return 0;
}
