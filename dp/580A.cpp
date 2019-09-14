///A. Kefa and First Steps
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vector<int>a(n+1,0);
    for (int i = 0; i < n; i++) cin >> a[i];
    int dp[n+1];
    memset(dp, sizeof(dp), 0);
    for (int i = 0; i < n; i++) dp[i] = 1;
    //int prev = a[0];
    for (int i = 1; i < n; i++)
    {
        int prev = a[i-1];
        if (prev <= a[i])
            dp[i] = max(1 + dp[i-1], dp[i]);
    }
    ///for (int i = 0; i < n; i++) cout << dp[i] <<" ";
    int ans = 1;
    for(int i = 0; i < n; i++)
    ans = max(ans, dp[i]);

    cout << ans << endl;
    /** [2 2 1 3 4 1]
        [2 2 9]
        [1 0 2 3 1 3 3 3 4 2]
      1 2 3 4 5 6
    1 1 2 2 2 3 3

      1 2 3
    1 1 2 3
    **/
    return 0;
}
