/// do again
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 1000010
#define INF 100000000
int n,m;
pair<int,int> P[maxn];
void solve(int x)
{
    int l=0,r=1,Min=INF;
    int ansx,ansl,ansr;
    while(l<=n&&r<=n)
    {
        int y=P[r].first-P[l].first;
        if(abs(y-x)<Min)
        {
            Min=abs(y-x);
            ansx=y;
            ansl=P[l].second;
            ansr=P[r].second;
        }
        if(y<x) r++;
        else if(y>x) l++;
            else break;
        if(l==r)
            r++;
    }
    if(ansl>ansr)
        swap(ansl,ansr);
    printf("%d %d %d\n",ansx,ansl+1,ansr);
}
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n==0&&m==0)
            break;
        P[0]=pair<int,int>(0,0);
        int d,sum=0;
        for(int i=1;i<=n;++i)
        {
            scanf("%d",&d);
            sum+=d;
            P[i]=pair<int,int>(sum,i);
        }
        sort(P,P+n+1);
        while(m--)
        {
            int x;
            scanf("%d",&x);
            solve(x);
        }
    }
    return 0;
}
