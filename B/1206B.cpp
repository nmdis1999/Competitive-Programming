///MAKE PRODUCT ONE
/**
    5
    -5 -3 5 3 0
    if num > 1 change them to 1
    if num < -1 change them to -1
    if num == 0 change if k > 0 k - 1 zeroes to anything and last zero to 1 or -1 else if k == 0
    change any one -1 to 1 or vice versa this will take 2 coins

*/
#include <bits/stdc++.h>
#define ll long long
#define MAXN 100001
using namespace std;
ll n, a[MAXN];
ll np = 0, nn = 0;
int main()
{
    cin >> n;
    ll diff = 0;
    ll cn = 0;
    ll num;
    for (ll i  = 0; i < n; i++) {
        cin >> a[i];
        num = a[i];
        if (a[i] > 1)
            {
                diff += num - 1;
                np++;
            }
        else if (a[i] < -1)
        {
            diff += (-1 - num);
            nn++;
        }
        else if (a[i] == 0)
        {
            diff++;
            cn++;
        }
        else {
            if (a[i] == -1) nn++;
            if (a[i] == 1) np++;
        }
    }
    if (n > 1)
    {
        if (cn == 0)
        diff += 2;
    }
    cout << diff << endl;
    return 0;
}
