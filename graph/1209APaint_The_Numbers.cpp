#include <bits/stdc++.h>
using namespace std;
int n;
int a[101];
int main()
{
    int n;
    cin >> n;
    int A[n+1];
    for(int i=1;i<=n;i++){
        cin >> A[i];
    }
    sort(A+1,A+1+n);
    unordered_map <int,int> m;
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(m[i]==0){
            ans++;
            for(int j=1;j<=n;j++){
                if(m[j]==0){
                    if(A[j]%A[i]==0){
                        m[j] = 1;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
