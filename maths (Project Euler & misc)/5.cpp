#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll s1 = (n*(n+1))/2;
    ll s2 = (n*(n+1)*(2*n+1))/6;
    cout << abs((s1*s1) - s2) << endl;
    return 0;
}
