///Given Length and Sum of Digits...
/// using greedy
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int m, i, s, k;
    cin >> m >> s;
    if (s < 1 && m > 1 || s > 9*m)
        cout <<"-1"<<" "<<"-1"<<endl;
    else
    {
        /**
            e.g : 2 15
            output : 69 96
            j = max(0, 6) = 6
            j = max(0, 9) = 9
            output -> 69
            j = min(9, 15) = 9
            j = min(9, 6) = 6
            output = 96
        **/
        for (i = m - 1, k = s;i >= 0; i--)
        {
            int j = max(0, k - 9*i);
            if (j == 0 && k && i == m - 1) j = 1; ///for not having leading zeroes
            cout << j; k -= j;
        }
        cout <<" ";
        for (i = m - 1, k = s; i >= 0; i--)
        {
            int j = min(9, k);
            cout << j;
            k -= j;
        }
    }
    return 0;
}
