/**
    My dumbass didn't understand that this is not like coin exchange
    use greedy to maximize space optmization, screw dp here
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e9+7;
ll n;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    ll d = 0; /// d is for denomination
    if (n / 100 > 0)
    {
        d += n / 100;
        n = n % 100;
    }
    if (n / 20 > 0)
    {
        d += n / 20;
        n = n % 20;
    }
    if (n / 10 > 0)
    {
        d += n / 10;
        n = n % 10;
    }
    if (n / 5 > 0)
    {
         d += n / 5;
         n = n % 5;
    }
    if (n / 1 > 0)
    {
         d += n / 1;
         n = n % 1;
    }
    cout << d << endl;
    return 0;
}
