
#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main()
{
    ull test;
    cin >> test;
    while(test--)
    {
        ull last;
    cin >> last;
    ull sum  = 0;
    ull a = 1, b = 2;
    ull next;
    while (b <= last)
    {
        if (b % 2 == 0)
            sum += b;
        next = a + b;
        a = b;
        b = next;
    }
    cout << sum << endl;
    }
    return 0;
}
