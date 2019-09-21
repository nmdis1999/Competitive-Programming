#include <bits/stdc++.h>
#define ll long long
#define MAXN 100001
using namespace std;
ll n;
int main()
{
    cin >> n;
    vector<ll> primes;
    primes.reserve(10001);
    primes.push_back(2);
    for (ll i = 3; primes.size() <= 10001; i += 2)
    {
        bool isPrime = true;
        for (auto p : primes)
        {
            ///found divisor abort
            if (i % p == 0)
            {
                isPrime = false;
                break;
            }
            ///no larger prime factor possible?
            if (p*p > i)
                break;
        }

        if (isPrime)
        primes.push_back(i);

    }

    n--;
    if (n < primes.size())
        cout <<primes[n]<<endl;
    return 0;
}

