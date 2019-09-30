#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll t, n;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int,int> m;
        ll a[101];

        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            m[a[i]] = 0;
        }

        for (int i = 1; i <= n - 1; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (a[j] > a[i])
                    m[a[i]]++;
            }
        }

        for (auto i : a)
            cout << i.second<<" ";
        cout << endl;
    }
    return 0;
}
