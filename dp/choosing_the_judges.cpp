#include <bits/stdc++.h>
#define N 10001
#define ll long long
using namespace std;
ll a[N+1];
ll dp[N];

int solve(int n)
{
    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i-2] + a[i], dp[i - 1]);
    }
    return dp[n-1];
}
int main() {
	int t;
	cin >> t; int index = 1;
	while (t--)
	{
	    int n;
	    cin >> n;
	    a[n+1];
	    for (int i = 0; i < n; i++) cin >> a[i];
	    dp[0] = a[0], dp[1] = max(a[0], a[1]);
	    cout <<"Case "<<index++ <<": "<< solve(n) << endl;
	}
	return 0;
}
