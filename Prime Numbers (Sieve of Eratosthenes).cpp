//Prime Numbers (Sieve of Eratosthenes)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <char> prime (n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            if (i * 1ll * i <= n)
            {
                for (int j = i * i; j <= n; j += i)
                    prime[j] = false;
            }
        }
    }

    for (int i = 0; i < n + 1; i++)
    {
        if(prime[i])
            cout << i <<" ";
    }
    cout << endl;
    return 0;
}
