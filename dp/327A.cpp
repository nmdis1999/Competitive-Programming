/**
Flipping Game :
can be solved without DP
count number of 1 whenever we encounter them, and number of zeroes
if we encounter 1 and number of 0 is > 0 then simply decrement it. Else if we encounter
0 increment count of 0 and check if it is maximal zero we have encountered
if so update max count of zero. In the end output count of 1 + count of max 0 that will be the
answer
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans, cnt_1 = 0, cnt_0 = 0, cnt_0max = -1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            cnt_1++;
            if (cnt_0 > 0)
                cnt_0--;
        }
        if (a == 0)
        {
            cnt_0++;
            cnt_0max = max(cnt_0max, cnt_0);
        }
    }

    cout << cnt_1 + cnt_0max << endl;
    return 0;
}
