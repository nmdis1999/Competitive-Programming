#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5+10;
int a[N];
int sum = 0;
int n;
int main(){
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        sum += a[i];
    }
    if(sum % 3){
       cout << "0\n";
       return 0;
    }
    sum /= 3;
    ll ans = 0;
    ll tmp = 0;
    ll k = 0;
    for(int i = 1; i < n; ++i){
        tmp += a[i];
        if(tmp == sum + sum)
            ans += k;
        if(tmp == sum)
        ++k;
    }
    cout << ans << "\n";
    return 0;
}
