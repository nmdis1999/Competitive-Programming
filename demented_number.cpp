#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll demented(ll n)
{
    ll sum = 0;
    while(n)
    {
        int d = n % 10;
        sum += d * d;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b;
        ll cnt = 0;
        for (ll i = a; i <= b; i++)
        {
            map<ll, bool> nums;
            ll sq = i;
            if (sq == 1)
                cnt++;
            while(sq != 1)
            {
                sq = demented(sq);
                if (nums[sq])
                    break;
                nums[sq]=1;
                if(sq == 1)
                    cnt++;
                if (sq == 4)
                    break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
