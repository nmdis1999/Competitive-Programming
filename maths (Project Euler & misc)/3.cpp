#include <iostream>
#define ull unsigned long long
using namespace std;

int main()
{
    ull test;
    cin >> test;
    while(test--)
    {
        ull n;
        cin >> n;
        for (ull i = 2; i * i <= n; i++)
        {
            if (n % i == 0 && i != n) ///this is to check if the prime is factor and keeping larest one
                n /= i;
        }
        cout << n << endl;
    }
}
