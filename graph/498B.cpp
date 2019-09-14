#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>vect1(105,10000);
vector<int>vect2(105,10000);
int dp[105][105];
int fn1(int i,int j){
    if(i==n)
        return 0;
    if(j==m)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    int q1=0,q2=0,q3=0;
    if(abs(vect1[i]-vect2[j])<=1)
        q1=1+fn1(i+1,j+1);
    q2=fn1(i+1,j);
    q3=fn1(i,j+1);
    return dp[i][j]=max(q1,max(q2,q3));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vect1[i];
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>vect2[i];
    sort(vect1.begin(),vect1.end());
    sort(vect2.begin(),vect2.end());
    cout<<fn1(0,0)<<"\n";
    return 0;
}
