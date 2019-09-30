/**
Triangle partioning : https://iuconvergent.wordpress.com/2019/02/04/light-oj-1043-triangle-partitioning-solved/
*/
#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define ll long long int
#define ull unsigned LL

const int inf=1<<30;
const LL INF=1e18;
const int MOD=1e9+7;


int main()
{
    int tn, cn=0;
    scanf("%d", &tn);
    while(tn--)
    {
        double ab, ac, bc, r;
        scanf("%lf%lf%lf%lf", &ab, &ac, &bc, &r);

        double ad = sqrt(r/(r+1))*ab;
        printf("Case %d: %.10lf\n", ++cn, ad);
    }
    return 0;
}
