#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
int main()
{
    cin >> n;
    string s;
    cin >> s;
    ll b = 0;
    ll mini = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] ==')')
            b--;
        else
            b++;
        mini = min(mini, b); ///so when all ) comes before ( we can output no
    }
    if (!b && mini >= -1)
        cout <<"Yes\n";
    else
        cout <<"No\n";
    return 0;
}
