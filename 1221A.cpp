#include <bits/stdc++.h>
#define ll long long
using namespace std;
int subArraySum(ll arr[], int n, int sum)
{
    int curr_sum = arr[0], start = 0, i;
    for (i = 1; i <= n; i++)
    {
        while (curr_sum > sum && start < i-1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }
        if (curr_sum == sum)
        {
            return 1;
        }

        if (i < n)
          curr_sum = curr_sum + arr[i];
    }
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int q, n;
    cin >> q;
    while(q--)
    {
        cin >> n;
        ll s[101];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        sort(s, s+n);
        if (subArraySum(s, n, 2048))
        {
            cout <<"YES\n";
        }
        else
            cout <<"NO\n";
    }
    return 0;
}
