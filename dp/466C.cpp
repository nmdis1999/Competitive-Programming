/**
I solved C a bit another way with DP: http://codeforces.ru/contest/466/submission/7770043 First consider the case when Σ a = 0, where a is input. Then count the number dp of all indexes i from 0 to n - 2, for which Σ0ia = 0. The answer is .

Now consider the case when s = Σ a ≠ 0. Take two lists dp0 and dp1. dp0 will contain all indexes i, for which , and dp1 will contain all indexes j, which satisfy . Now remains a bit tricky part, which can get TLE, if not correctly implemented: count all ordered pairs from dp0 and dp1. This can be done in linear time by looping through dp1 and saving current dp0 index:

f=0
for sec in dp1:
    ans += f
    for fir in dp0[f:]:
        if fir < sec:
            ans+=1
            f+=1
print ans
**/
#include <bits/stdc++.h>
#define N 500001
using namespace std;
int a[N], dp[N];
int n;

void preProcess()
{
    dp[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 2; i--)
    {
        dp[i] = a[i] + dp[i + 1];
    }
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    int sum  = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    /**
     e.g 1:5
           1 2 3 0 3
     ans
    **/
    preProcess();
    int cnt = 0;
    for (int i = n - 1; i >= 2; i--)
    {
        if (2 * dp[i] == (sum - dp[i]))
            cnt++;
    }

    /*for (int i = n - 1; i > 0; i--)
        cout << dp[i] <<" ";*/
    cout << cnt << endl;
    return 0;
}
