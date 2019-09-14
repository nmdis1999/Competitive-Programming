#include<bits/stdc++.h>
#define N 1000001
using namespace std;
long long a[N];
long long dp[N][2];
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    /**
    [1 2 1 3 2 2 2 2 3]
    ways -> 1 + [1 3 2 2 2 2 3]                       | -> 2 + [3 2 2 2 2 3]
         -> 2 + [2 2 2 2 3]    | -> 4 + [2 2 2 3]     | -> 5 + [2 2 2 2 3]    |-> 4 + [2 2 3]
         -> 4 + [2 2 3]        | -> 6 + [2 3]         | -> 7 + [2 3]          | -> 9
         -> 9                  | -> 9                 | -> 10
    comment from editorial thread :
    Alternative way is to use a 2 dimensional dp.
    dp[i][0] represents max value you can get from 1 to i and not picking i.
    dp[i][1] represents max value from 1 to i and picking i.
    The relations for each i are:
    Base case- dp[0][0]=dp[0][1]=0;
    dp[i][0]=max(dp[i-1][0],dp[i-1][1])'
    dp[i][1]=freq[i]*i+dp[i-1][0];
    **/
    int n;
    cin >> n;
    //memset(dp, sizeof(dp), 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    dp[0][0] = dp[0][1] = 0;
    for (int i = 1; i < N; i++)
    {
        dp[i][0] = max(dp[i-1][0], dp[i-1][1]);
        dp[i][1] = a[i]*i + dp[i-1][0];
    }
    long long ans = max(dp[N-1][0], dp[N-1][1]);
    cout << ans << endl;
    return 0;
}
