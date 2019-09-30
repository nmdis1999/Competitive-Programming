#include <iostream>
#include <map>
#define ll long long
#define MAXN 100001
using namespace std;
int t, a, b;
int main()
{
    cin >> t;
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    map<int, int> m;
    m[0] = 6;
    m[1] = 2;
    m[2] = 5;
    m[3] = 5;
    m[4] = 4;
    m[5] = 5;
    m[6] = 6;
    m[7] = 3;
    m[8] = 7;
    m[9] = 6;
    while (t--)
    {
        int sum = 0;
        cin >> a >> b;
        sum  =  a + b;
        int ans = 0;
        if (sum == 0)
            ans += m[sum];
        while(sum)
        {
            ans += m[sum%10];
            sum /= 10;
        }
        cout << ans<<"\n";
    }
    return 0;
}
