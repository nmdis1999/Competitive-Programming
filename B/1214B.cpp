#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, b, g;
int main()
{
    cin >> b >> g >> n;
    cout << min(g, n) - (n - min(b, n)) + 1;
    return 0;
}
