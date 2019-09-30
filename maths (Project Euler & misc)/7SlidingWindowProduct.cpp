#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll test, n;
int main()
{
    cin >> test;
    while(test--)
    {
        cin >> n;
        ll pro = n / 10;
        n = n % 10;
        for (ll i = 1; i < 13; i++)
            pro = pro * a[i];
        ll maxP = pro;
        for (ll i = 1; i < n; i++)
        {
            ll temp = (pro / a[i])*a[13+i];
            pro = temp;
            maxP = max(maxP, pro);
        }
        cout << maxP << endl;
    }
    return 0;
}
