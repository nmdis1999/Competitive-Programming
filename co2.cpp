#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll sum = (1*a)+(2*b)+(3*c);
        if (a == b == c)
            {
                cout <<"YES\n";
                continue;
            }
        if (sum % 2 != 0)
        {
            cout<<"NO\n";
        }
        else
        {
            if (c == 0 && a && b)
            {
                if (a%2 == 0 && b % 2 == 0)
                {
                    cout <<"YES\n";
                    continue;
                }
                else
                {
                    cout <<"NO\n";
                    continue;
                }
            }
            else if (b == 0 && a && c)
            {
                if (a%2 == 0 && c % 2 == 0)
                {
                    cout <<"YES\n"; continue;
                }
                else
                {
                    cout <<"NO\n"; continue;
                }
            }
            else if (a == 0 && b && c)
            {
                if (b % 2 == 0 && c % 2 == 0)
                {
                    cout <<"YES\n"; continue;
                }
                else
                {
                    cout <<"NO\n"; continue;
                }
            }
            else
            {
                cout <<"YES\n"; continue;
            }
        }
    }
    return 0;
}
