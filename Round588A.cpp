#include <bits/stdc++.h>
#define ll long long
#define MAXN 10001
#define endl '\n'
using namespace std;
int isPossible(int arr[], int n)
{
    int i, currSum;
    int sum = accumulate(arr, arr+n, 0);
    if (sum & 1) {
        return 0;
    }

    int k = sum >> 1;

    bool dp[n + 1][k + 1];
    for (i = 1; i <= k; i++)
        dp[0][i] = false;

    for (i = 0; i <= n; i++)
        dp[i][0] = true;
    for (i = 1; i <= n; i++) {
        for (currSum = 1; currSum <= k; currSum++) {
            dp[i][currSum] = dp[i - 1][currSum];
            if (arr[i - 1] <= currSum)
                dp[i][currSum] = dp[i][currSum] |
                  dp[i - 1][currSum - arr[i - 1]];
        }
    }
    vector<int> set1, set2;
    if (!dp[n][k]) {
        return 0;
    }
    i = n;
    currSum = k;

    while (i > 0 && currSum >= 0) {
        if (dp[i - 1][currSum]) {
            i--;
            set2.push_back(arr[i]);
        }

        else if (dp[i - 1][currSum - arr[i - 1]]) {
            i--;
            currSum -= arr[i];
            set1.push_back(arr[i]);
        }
    }
    int sum1 = 0, sum2 = 0;
    for (auto i : set1)
        sum1 += i;
    for (auto i : set2)
        sum2 += i;
    return sum1 == sum2;
}
int main()
{
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    int n = 4;
    if (isPossible(a, n))
        {
            cout <<"YES\n";

        }
    else
        cout << "NO";
    return 0;
}
