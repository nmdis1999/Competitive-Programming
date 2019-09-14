#include <bits/stdc++.h>
#define int long long
#define N 100005
using namespace std;
string s;
vector < int > a;
vector < int > b;
main()
{
    cin>>s;
    for(int i=0;i<s.size()-1;i++)if(s[i]=='A' && s[i+1]=='B')a.push_back(i);
    for(int i=0;i<s.size()-1;i++)if(s[i]=='B' && s[i+1]=='A')b.push_back(i);
    if(a.size()==0 || b.size()==0)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            if(abs(a[i]-b[j])>1)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}
