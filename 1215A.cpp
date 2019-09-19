#include <bits/stdc++.h>
#define MAXN 200005
#define ll long long int
using namespace std;
ll n, a[MAXN], p = 1;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> n;
    ll nc = 0, pc = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) nc++;
        else if (p > 0) pc++;
    }

    for (int i = 0; i < n - 1; i++)
    {
        p = a[i];
        for (int j = i + 1; j < n; j++)
        {
            p *= a[j];
            ///cout << i <<" "<<j <<"->"<<p << endl; /// cout<<endl;
            if (p < 0)
                nc++;
            else if (p > 0)
                pc++;
        }
    }
    ///cout << endl;
    cout << nc <<" "<< pc << endl;
    return 0;
}
