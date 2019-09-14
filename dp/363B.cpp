#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, k;
ll dp[100001];
ll a[100001];
int consecutiveSum()
{
    int index = 0;
    /**
    7 3
    1 2 6 1 1 7 1
    dp[0] = 0, dp[1] = 9 + 1 - 1 = 9
    dp[2] = 8 + 1
    **/
    dp[index] = 0;
    for (ll i = 0; i < k; i++)
        dp[index] += a[i];
    ll minSum = dp[index];
    index++;
    for (ll i = 1; i <= n - k; i++)
    {
        dp[index]  = dp[index - 1] + a[index + k - 1] - a[index - 1];
        minSum = min(minSum, dp[index]);
        index++;
    }
    return minSum;
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    cin >> a[i];
    int sum = consecutiveSum();
    /*for (int i = 0; i < n - k; i++)
    {
        cout << dp[i] <<" ";
    }*/
    ll j;
    for (ll i = 0; i < n; i++)
    {
        if (sum == dp[i])
        {
            j = i+1;
        }
    }
    cout << j << endl;
    return 0;
}
