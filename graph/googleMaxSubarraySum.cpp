#include <bits/stdc++.h>
using namespace std;

int lengthOfSub(int a[], int n, int k)
{
    int maxLen = 0, sum  = 0;
    unordered_map<int, int> um;
    /**
        10, 5, 2, 7, 1, 9
        target = 15
             10 15 17 24 25 34
        um -> 0  1 2   3 4   5
    **/
    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if (sum == k)
            maxLen = i + 1;

        if (um.find(sum) == um.end())
            um[sum] = i;

        if (um.find(sum - k) != um.end())
        {
            if (maxLen < (i - um[sum - k]))
                um[sum - k] = i - um[sum - k];
        }
    }

    return maxLen;
}
int main()
{
    int n, sum;
    cin >> n;
    int a[n+1], target;
    int ans = lenghtOfSub(a, n, target);
    cout << ans << endl;
    return 0;
}
