///Cut the ribbon
#include <bits/stdc++.h>
#define MAX 4001
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    /** 5 [5 3 2]
        -> 1 [when pick 5]      -> 2 [pick 3 and 2] (answer) -> 2 [pick 2 and 2] but not possible since 1 length is not in a,b,
    this is basically coin exchange problem
    **/
	int dp[n+1];
	fill(dp, dp+n+1, -1e10); dp[0]=0;
	for (int i=a; i<=n; i++) dp[i]=max(dp[i], dp[i-a]+1);
	for (int i=b; i<=n; i++) dp[i]=max(dp[i], dp[i-b]+1);
	for (int i=c; i<=n; i++) dp[i]=max(dp[i], dp[i-c]+1);
	cout << dp[n];
    return 0;
}
