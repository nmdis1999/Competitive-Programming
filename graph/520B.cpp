#include <bits/stdc++.h>
#define N 10001
using namespace std;
int n, m;
int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    /**
       comment from codeforces editorial->
       First understand if m<n then ans is n-m
       else
       make m less than or equal to n by dividing it by 2 ,
       increase the count by one and if at any moment it becomes odd increase the count by 1 and increase m by 1 . e.g
       4 17
       1. 17->18
       2. 18->9
       3. 9->10
       4. 10->5
       5. 5->6
       6. 6->3
       then 3 is smaller than 4 so ans is 6+(4-3) = 7
    **/
    cin >> n >> m;
    int ans = 0;
    while(m > n)
    {
        if(m % 2)
        {
            m++;
            ans++;
        }
        m /= 2;
        ans++;
    }
    ans=(ans + (n - m));
    cout<< ans <<endl;
    return 0;
}
