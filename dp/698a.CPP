#include <bits/stdc++.h>
using namespace std;
int n;
int dp[101][2];
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    int a[n];
    dp[0][1] = 0, dp[0][2] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ///O(n) approach with O(2*n) space
    for (int i = 1; i <= n; i++)
    {
        dp[i][1] = ((a[i] == 3) ? dp[i-1][2] : (a[i] == 2 ? dp[i-1][2] : min(dp[i-1][1] + 1, dp[i-1][2] + 1)));
        dp[i][2] = ((a[i] == 3) ? dp[i-1][1] : (a[i] == 1 ? dp[i-1][1] : min(dp[i-1][1] + 1, dp[i-1][2] + 1)));
    }

    cout << min(dp[n][1], dp[n][2]);
    return 0;
}
/**
O(n) approach -> credit cf submissions
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll a[n+1],rest=0;
    for(ll i=1;i<=n;i++)
    {
        cin >> a[i];
        if(a[i]==0)
        {
            rest++;
        }
        else if(a[i]==a[i-1] && a[i]<3)
        {
            a[i]=0;rest++;
        }
        else if(a[i]==3)
        {
            a[i]=3-a[i-1];
        }

    }   cout << rest << endl;
    return 0;
}
**/
